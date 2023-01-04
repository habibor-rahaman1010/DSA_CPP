// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>ara, int q) {
    int low = 0;
    int high = ara.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (ara[mid] == q)
          return mid;

        if (ara[mid] < q)
          low = mid + 1;

        else
          high = mid - 1;
    }

  return -1;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int q;
    cout<<"Enter the value query: ";
    cin>>q;
    int result = binarySearch(ara, q);

    if (result == -1){
        cout<<q << " Not found int the array.\n";
    }
    else{
        cout<<"Element of " <<q <<" is found at index " <<result <<"\n";
    }
}
