/*
Write a program that takes an array of size n and q queries as input. For each query you will be given a number.
For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’.
*/

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
    sort(ara.begin(), ara.end());

    int t;
    cout<<"Enter your test case: ";
    cin>>t;

    while(t--){
        int q;
        cout<<"Enter the value of q: ";
        cin>>q;

        int low = 0;
        int heigh = ara.size() - 1;
        bool flag = 0;
        while(low <= heigh){

            int mid = (low + heigh) / 2;
            if(ara[mid] == q){
                cout<< "Yes! \n";
                flag = 1;
                break;
            }

            if(ara[mid] > q){
                heigh = mid - 1;
            }

            if(ara[mid] < q) {
                low = mid + 1;
            }
        }
        if(!flag){
            cout<<"No! \n";
        }
    }

    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}
