//sort in c++ program ascending order...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    for(int i = 0; i < ara.size(); i++){
        for(int j = 0; j < ara.size(); j++){
            if(ara[i] < ara[j]){
                swap(ara[i], ara[j]);
            }
        }
    }

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

return 0;
}

