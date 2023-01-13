#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> quick_sort(vector<int>ara) {
    if(ara.size() <= 1){
        return ara;
    }
    int pivot = ara.size() - 1;

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
    vector<int>sorted_left = quick_sort(left);
    vector<int>sorted_right = quick_sort(right);
    vector<int>sorted;

    for(int i = 0; i < right.size(); i++){
        sorted.push_back(sorted_right[i]);
    }

    sorted.push_back(ara[pivot]);

    for(int i = 0; i < left.size(); i++){
        sorted.push_back(sorted_left[i]);
    }
    return sorted;
}

int main() {
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>vect = quick_sort(ara);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }

return 0;
}
