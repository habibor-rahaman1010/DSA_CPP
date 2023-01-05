//Selection sort ascending order algorithm applying in c++ program...


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Selection_Srot(vector<int>ara) {
    int temp;
    for(int step = 0; step < ara.size() - 1; step++){
        int min_index = step;
        for(int j = step + 1; j < ara.size(); j++){
            if(ara[j] < ara[min_index]){
                min_index = j;
            }
        }
        swap(ara[min_index], ara[step]);
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
