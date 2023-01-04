//Insertion sort descending order in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Time complexity On(n^2)
    Space complexity O(n)
*/

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int temp;
    for(int i = 1; i < ara.size(); i++){
        int index = i;
        while(index >= 1){
            if(ara[index - 1] < ara[index]){
                swap(ara[index - 1], ara[index]);
                index--;
            }
            else{
                break;
            }
        }
    }

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }


    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}

