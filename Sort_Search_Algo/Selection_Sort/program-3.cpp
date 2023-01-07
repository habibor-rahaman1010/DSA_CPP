//Selection sort in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Selection_Sort(vector<int>ara) {
    int temp;
    for(int i = 0; i < ara.size() - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < ara.size(); j++){
            if(ara[j] < ara[minIndex]){
                minIndex = j;
            }
        }
        temp = ara[minIndex];
        ara[minIndex] = ara[i];
        ara[i] = temp;
    }

    return ara;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>sel = Selection_Sort(ara);
    for(int i = 0; i < sel.size(); i++){
        cout<<sel[i] <<" ";
    }

return 0;
}

