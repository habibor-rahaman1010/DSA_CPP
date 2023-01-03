//binary search in c++ program....

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cout<<"Enter the value of (n and q): ";
    cin>>n >>q;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }
    sort(ara.begin(), ara.end());
    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

    //for query value....

return 0;
}
