//array sort in c++ program...

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter vector size: ";
    cin>>n;

    vector<int>ara;
    ara.resize(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    cout<<"\nbefore sorting vector \n";
    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        cout<<value <<" ";
    }

    //sort(ara.begin(), ara.end());
    sort(ara.begin(), ara.begin() + ara.size());

    cout<<"\nafter sorting vector \n";
    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        cout<<value <<" ";
    }

return 0;
}

