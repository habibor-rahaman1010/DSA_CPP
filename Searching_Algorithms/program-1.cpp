//Linear search in c++ program...

#include <iostream>
#include <vector>
using namespace std;

/*
    Time complexity O(n)
    space complexity O(n)
*/

int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    string flag = "No! \n";
    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        if(value == k){
            flag = "Yes! \n";
        }
    }
    cout<<flag;

return 0;
}
