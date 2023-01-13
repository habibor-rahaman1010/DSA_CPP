#include <iostream>
using namespace std;

bool binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return true;
        }
        if (arr[mid] > key) {
            return binarySearch(arr, low, mid - 1, key);
        }
        return binarySearch(arr, mid + 1, high, key);
    }
    return false;
}

bool checkDuplicates(int arr[], int n, int key) {
    int first = -1, last = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (first != -1 && last != -1 && last > first) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if (checkDuplicates(arr, n, key)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
