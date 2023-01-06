//bubble sort ascending order implement in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Bubble_Sort(vector<int>ara) {
    int temp;
    for(int i = 0; i < ara.size(); i++){
        for(int j = 1; j < ara.size(); j++){
            if(ara[j] < ara[j - 1]){
                temp = ara[j];
                ara[j] = ara[j - 1];
                ara[j - 1] = temp;
            }
        }
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

    vector<int>sortArray = Bubble_Sort(ara);
    for(int i = 0; i < sortArray.size(); i++){
       cout<<sortArray[i] <<" ";
    }

return 0;
}
