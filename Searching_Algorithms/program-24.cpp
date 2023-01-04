//bubble sort descending order in c++ program try to more optimize...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    for(int step = 0; step < ara.size(); step++){
        int last = ara.size() - 1 - step;
        bool sorted = true;
        for(int j = 0; j <= last - 1; j++){
            if(ara[j] < ara[j + 1]){
                swap(ara[j], ara[j + 1]);
                sorted = false;
            }
        }
        if(sorted){
            break;
        }
    }

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}
