//time ans space complexity find out in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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


    for(int i = 0; i < ara.size(); i++){
        string ans = "NO \n";

        for(int j = 0; j < ara.size(); j++){
            if(i == j){
                continue;
            }
            if(ara[i] == ara[j]){
                ans = "Yes \n";
            }
        }
        cout<<"i = " <<i <<" " <<ans;
    }

return 0;
}

