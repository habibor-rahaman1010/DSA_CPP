//Insertion sort implement in c++ program

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Insertion_Sort(vector<int>ara) {
    //[8, 2, 4, 1, 3]
    for(int i = 1; i < ara.size(); i++){
        int current = ara[i];
        int j = i - 1;

        while(j >= 0 && ara[j] > current){
            ara[j + 1] = ara[j];
            j--;
        }
        ara[j + 1] = current;
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
    cout<<"\n";
    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}
