#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int maxInRemaining = findMax(arr+1, size-1);
    if (arr[0] > maxInRemaining) {
        return arr[0];
    } else {
        return maxInRemaining;
    }
}

int main() {
    int arr[] = {1, 5, 8, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum element in the array is: " << findMax(arr, size) << endl;
    return 0;
}
