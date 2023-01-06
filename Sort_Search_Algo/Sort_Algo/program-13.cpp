//bubble sort algorithm descending order in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BubbleSort(vector<int>ara) {
    int temp;
    for(int i = 0; i < ara.size(); i++){
        int last = ara.size() - 1 - i;
        for(int j = 0; j <= last - 1; j++){
            if(ara[j] > ara[j + 1]){
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < ara.size(); i++){
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

    BubbleSort(ara);


return 0;
}

