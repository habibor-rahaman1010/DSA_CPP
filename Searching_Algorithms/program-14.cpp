//bubble sort in c++ program ascending order...

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

    int tamp;
    for(int i = 0; i < ara.size(); i++){
        for(int j = 0; j < ara.size() - 1; j++){
            if(ara[j] > ara[j + 1]){
                swap(ara[j + 1], ara[j]);
            }
        }
    }

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

return 0;
}

