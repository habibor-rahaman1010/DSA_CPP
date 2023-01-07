//Merge Sort algorithm applying in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int> Merge_Sort(vector<int>ara) {
    if(ara.size() <= 1){
        return ara;
    }

    int mid = (ara.size() / 2);
    vector<int>vector1;
    vector<int>vector2;

    for(int i = 0; i < mid; i++){
        vector1.push_back(ara[i]);
    }

    for(int i = mid; i < ara.size(); i++){
        vector2.push_back(ara[i]);
    }

    vector<int>sorted1 = Merge_Sort(vector1);
    vector<int>sorted2 = Merge_Sort(vector2);

    vector<int>merged_sorted;
    int index1 = 0;
    int index2 = 0;

    for(int i = 0; i < ara.size(); i++){
        if(index1 == sorted1.size()){
            merged_sorted.push_back(sorted2[index2]);
            index2++;
        }
        else if(index2 == sorted2.size()){
            merged_sorted.push_back(sorted1[index1]);
            index1++;
        }
        else if(sorted1[index1] < sorted2[index2]){
            merged_sorted.push_back(sorted1[index1]);
            index1++;
        }
        else{
            merged_sorted.push_back(sorted2[index2]);
            index2++;
        }
    }
    return merged_sorted;
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
