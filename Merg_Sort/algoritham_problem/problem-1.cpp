//give 2 sorted array and then return merged the sort array...

#include <iostream>
#include <vector>
using namespace std;

vector<int> sort_array(vector<int>sorted1, vector<int>sorted2) {
     vector<int>merged;

    for(int i = 0; i < sorted1.size(); i++){
        merged.push_back(sorted1[i]);
    }

    for(int i = 0; i < sorted2.size(); i++){
        merged.push_back(sorted2[i]);
    }

return merged;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>sorted1(n);
    cout<<"Enter the sorted value of array: ";
    for(int i = 0; i < sorted1.size(); i++) {
        cin>>sorted1[i];
    }

    vector<int>sorted2(n);
    cout<<"Enter the sorted value of array: ";
    for(int i = 0; i < sorted2.size(); i++){
        cin>>sorted2[i];
    }

    vector<int>merged_vect = sort_array(sorted1, sorted2);
    for(int i = 0; i < merged_vect.size(); i++){
        cout<<merged_vect[i] <<" ";
    }

return 0;
}
