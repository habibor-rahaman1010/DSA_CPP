//return a vector in c++ program;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Bubble_Sort(vector<int>ara) {
    for(int i = 0; i < ara.size(); i++){
        ara[i] = ara[i] * 2;
    }
    return ara;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    int value;
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>vec = Bubble_Sort(ara);
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i] <<" ";
    }

return 0;
}
