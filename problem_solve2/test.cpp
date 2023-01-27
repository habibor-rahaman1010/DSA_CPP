#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr, int start, int end) {
    if (start == end) {
        return arr[start];
    }
    int maxInRemaining = findMax(arr, start + 1, end);
    if (arr[start] > maxInRemaining) {
        return arr[start];
    }
    else {
        return maxInRemaining;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    cout<< findMax(ara, 0, ara.size() - 1) << "\n";
    return 0;
}
