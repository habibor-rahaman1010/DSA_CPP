// Linear search algorithm applying in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Time complexity O(n)
    space complexity O(n)
*/

int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n + 1);
    for(int i = 1; i < ara.size(); i++){
        cin>>ara[i];
    }

    bool flag = 0;
    for(int i = 1; i < ara.size(); i++){
        if(ara[i] == k){
            cout<<"Yes! \n";
            flag = 1;
            break;
        }
    }

    if(!flag){
        cout<<"No! \n";
    }

    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}
