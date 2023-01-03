//time ans space complexity find out in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Time complexity is: O(n)   variable complexity
    Space complexity is: O(n)  variable complexity
*/

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara;
    ara.resize(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int maxi = ara[0];
    int mini = ara[0];
    int sum = 0;

    for(int i = 0; i < ara.size(); i++){
        maxi = max(maxi, ara[i]);
        mini = min(mini, ara[i]);
        sum += ara[i];
    }

    cout<<"\nmax is: " <<maxi <<"\n";
    cout<<"min is: " <<mini <<"\n";
    cout<<"sum is: " <<sum <<"\n";

return 0;
}
