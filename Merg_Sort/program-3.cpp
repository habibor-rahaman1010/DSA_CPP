//Merge Sort in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Merge_Sort(vector<int>ara) {
    if(ara.size() <= 1){
        return ara;
    }

    int mid = ara.size() / 2;
    vector<int>left;
    for(int i = 0; i < mid; i++){
        left.push_back(ara[i]);
    }

    vector<int>right;
    for(int i = mid; i < ara.size(); i++){
        right.push_back(ara[i]);
    }

    vector<int>sorted_A = Merge_Sort(left);
    vector<int>sorted_B = Merge_Sort(right);
    vector<int>sorted_merge;
    int idx1 = 0;
    int idx2 = 0;

    for(int i = 0; i < ara.size(); i++){
        if(idx1 == sorted_A.size()){
            sorted_merge.push_back(sorted_B[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_B.size()){
            sorted_merge.push_back(sorted_A[idx1]);
            idx1++;
        }
        else if(sorted_A[idx1] < sorted_B[idx2]){
            sorted_merge.push_back(sorted_A[idx1]);
            idx1++;
        }
        else{
            sorted_merge.push_back(sorted_B[idx2]);
            idx2++;
        }
    }
    return ara;
}

int main() {
    int n ;
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
