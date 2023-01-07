//Merge Sort algorithm applying in c++ program... it's code with mosh

#include <iostream>
#include <vector>
using namespace std;

vector<int> Merge_Sort(vector<int>ara) {
    if(ara.size() < 2){
        return ara;
    }

    int mid = (ara.size() / 2);
    vector<int>left_side(mid);
    vector<int>right_side(ara.size() - mid);

    for(int i = 0; i < mid; i++){
        left_side.push_back(ara[i]);
    }

    for(int i = mid; i < ara.size(); i++){
        right_side.push_back(ara[i]);
    }

    vector<int>sorted1 = Merge_Sort(left_side);
    vector<int>sorted2 = Merge_Sort(right_side);

    vector<int>merged_sorted;
    int index1 = 0;
    int index2 = 0;
    int k = 0;
    while(index1 < sorted1.size() && index2 < sorted2.size()){
        if(sorted1[index1] <= sorted2[index2]){
            merged_sorted[k++] = sorted1[index1++];
        }
        else{
            merged_sorted[k++] = sorted2[index2++];
        }
    }

    while(index1 < sorted1.size()){
        merged_sorted[k++] = sorted1[index1++];
    }

     while(index2 < sorted2.size()){
        merged_sorted[k++] = sorted1[index2++];
    }
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
