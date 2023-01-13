/* WAP that takes n integer numbers, and counts the number
of inversions in the array using divide and conquer algorithm in O(nlogn)*/

#include <iostream>
#include <vector>
using namespace std;

int inversion(vector<int>ara) {
    int inversion_count = 0;
    for(int i = 0; i < ara.size(); i++){
        for(int j = i + 1; j < ara.size(); j++){
            if(ara[i] > ara[j]){
                inversion_count++;
            }
        }
    }
    return inversion_count;
}

int main() {
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int result = inversion(ara);
    cout<<"Total inversion count is: "<<result;

return 0;
}
