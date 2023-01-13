#include <iostream>
#include <algorithm>
using namespace std;

bool is_subset(int arr1[], int arr2[], int m, int n) {
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            return false;
        }
        if (arr1[i] == arr2[j]) {
            i++;
        }
        j++;
    }
    return (i == m);
}

int main() {
    int m, n;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    if (is_subset(arr1, arr2, m, n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

