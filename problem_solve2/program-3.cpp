#include <iostream>
#include <vector>
using namespace std;

vector<int> Quick_Sort(vector<int>ara){
      if(ara.size() <= 1){
        return ara;
    }
    int pivot = rand() % (ara.size());

    vector<int>left, right;
    for(int i = 0; i < ara.size(); i++){
        if(i == pivot){
            continue;
        }
        if(ara[i] <= ara[pivot]){
            left.push_back(ara[i]);
        }
        if(ara[i] > ara[pivot]){
            right.push_back(ara[i]);
        }
    }
    vector<int>sorted_left = Quick_Sort(left);
    vector<int>sorted_right = Quick_Sort(right);
    vector<int>sorted_array;

    for(int i = 0; i < sorted_right.size(); i++){
        sorted_array.push_back(sorted_right[i]);
    }

    sorted_array.push_back(ara[pivot]);

    for(int i = 0; i < sorted_left.size(); i++){
        sorted_array.push_back(sorted_left[i]);
    }
    

    return sorted_array;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>vect = Quick_Sort(ara);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }
    cout<<"\n";

return 0;
}