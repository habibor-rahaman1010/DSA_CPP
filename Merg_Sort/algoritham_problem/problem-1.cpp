

#include <iostream>
#include <vector>
using namespace std;

void sort_array(vector<int>sorted1, vector<int>sorted2) {
     vector<int>merged;

     for(int i = 0; i < sorted1.size(); i++){
        merged.push_back(sorted1[i]);
     }

    for(int i = ; i < sorted2.size(); i++){
        merged.push_back(sorted2[i]);
    }

    for(int i = 0; i < merged.size(); i++){
        cout<<merged[i] <<" ";
    }
}

int main() {
    vector<int>sorted1 = {1, 3, 4, 7, 8};
    vector<int>sorted2 = {10, 11, 21, 22, 13};


    sort_array(sorted1, sorted2);

return 0;
}
