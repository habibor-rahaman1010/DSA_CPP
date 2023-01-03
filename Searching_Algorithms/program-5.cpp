//binary search in c++ program....

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cout<<"Enter the value of (n and q): ";
    cin>>n >>q;

    //for array value....
    cout<<"Enter array value: ";
    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }
    sort(ara.begin(), ara.end());

    //for query value....
    cout<<"Enter query value: ";
    vector<int>query(q);
    for(int i = 0; i < query.size(); i++){
        cin>>query[i];
    }

    int low = 0, heigh = n - 1;
    bool flag = 0;
    while(low <= heigh){
        int mid = (low + heigh) / 2;
        for(int i = 0; i < query.size(); i++){
            if(ara[mid] == query[i]){
                cout<<"Yes! \n";
                flag = 1;
                return 0;
            }

            if(ara[mid] > query[i]){
                heigh = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    if(!flag){
        cout<<"No! \n";
    }

return 0;
}
