/*
WAP that takes n integer numbers, and counts the number
of inversions in the array using divide and conquer algorithm in O(nlogn)
*/

#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, k = left;
    int inv_count = 0;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }
    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
    return inv_count;
}

int _mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        inv_count = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int countInversions(int arr[], int n) {
    int temp[n];
    return _mergeSort(arr, temp, 0, n - 1);
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Number of inversions: " << countInversions(arr, n) << endl;
    return 0;
}

