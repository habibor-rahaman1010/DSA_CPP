// Binary search algorithm applying in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n + 1);
    for(int i = 1; i < ara.size(); i++){
        cin>>ara[i];
    }

    sort(ara.begin(), ara.end());
    int low = 0;
    int heigh = ara.size() - 1;

    bool flag = 0;
    while(low <= heigh){
        int mid = (low + heigh) / 2;

        if(ara[mid] == k){
            cout<<"Yes! \n";
            flag  = 1;
            break;
        }
        if(ara[mid] > k){
            heigh = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(!flag){
        cout<<"No! \n";
    }

    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}

