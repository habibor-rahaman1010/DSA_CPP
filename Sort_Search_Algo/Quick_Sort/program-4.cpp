//Quick sort implement in c++ program...

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

vector<int> Merge_Sort(vector<int>ara) {
    if(ara.size() <= 1){
        return ara;
    }

    //here 2 lines of code for shuffle...
    mt19937 rng(random_device{}());
    shuffle(ara.begin(), ara.end(), rng);

    int pivot = ara.size() / 2;
    vector<int>left, right;

    for(int i = 0; i < ara.size(); i++){
        if(i == pivot){
            continue;
        }
        if(ara[i] <= ara[pivot]){
            left.push_back(ara[i]);
        }
        else{
            right.push_back(ara[i]);
        }
    }

    vector<int>sorted_left = Merge_Sort(left);
    vector<int>sorted_right = Merge_Sort(right);

    vector<int>sorted;

    for(int i = 0; i < sorted_left.size(); i++){
        sorted.push_back(sorted_left[i]);
    }
    sorted.push_back(ara[pivot]);

    for(int i = 0; i < sorted_right.size(); i++){
        sorted.push_back(sorted_right[i]);
    }

    return sorted;

}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>vect = Merge_Sort(ara);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }


return 0;
}
