//Insertion sort in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//[5, 3, 1, 2, 4]
vector<int> Insertion_Sort(vector<int>ara) {
    for(int i = 1; i < ara.size(); i++){
        int current_item = ara[i];
        int j = i - 1;

        for(; j >= 0 && ara[j] > current_item; j--){
            ara[j + 1] = ara[j];
        }
        ara[j + 1] = current_item;
    }
    return ara;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
       cin>>ara[i];
    }

    vector<int>vect = Insertion_Sort(ara);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }

return 0;
}
