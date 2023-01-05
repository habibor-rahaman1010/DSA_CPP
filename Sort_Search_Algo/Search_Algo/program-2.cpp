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

    int low = 0;
    int heigh = ara.size() - 1;

    while(low <= heigh){
        int mid = (low + heigh) / 2;

        if(ara[mid] == k){
            cout<<"Yes! \n";
            break;
        }
        if(ara[mid] > ){

        }
    }



    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}

