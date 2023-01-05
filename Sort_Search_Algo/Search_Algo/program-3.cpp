// Linear search algorithm applying in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Time complexity O(n)
    space complexity O(n)
*/

int linearSearch(vector<int>ara, int q) {

    for(int i = 1; i < ara.size(); i++){
        if(ara[i] == q){
            return i;
        }
    }
    return -1;
}

int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n + 1);
    for(int i = 1; i < ara.size(); i++){
        cin>>ara[i];
    }

    int index = linearSearch(ara, k);
    if(index == -1){
        cout<<"Not found! " <<index <<"\n";
    }
    else{
        cout<<"Found it! " <<ara[index] <<"\n";
    }

    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}

