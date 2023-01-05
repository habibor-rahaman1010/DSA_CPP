//Selection sort descending order algorithm applying in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Selection_Srot(vector<int>ara) {
    int temp;
    for(int step = 0; step < ara.size() - 1; step++){
        int max_index = step;
        for(int i = step + 1; i < ara.size(); i++){
            if(ara[i] > ara[max_index]){
                max_index = i;
            }
        }
        temp = ara[max_index];
        ara[max_index] = ara[step];
        ara[step] = temp;
    }

    for(int i = 0 ; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    Selection_Srot(ara);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}
