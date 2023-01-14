/*
WAP that takes n integer numbers, and counts the number
of inversions in the array using divide and conquer algorithm in O(nlogn)
*/

#include <iostream>
using namespace std;

long long merge(long long arr[], int left, int mid, int right) {
  int i = left, j = mid, k = 0;
  long long invCount = 0;
  int temp[(right - left + 1)];

  while ((i < mid) && (j <= right)) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      ++k;
      ++i;
    } else {
      temp[k] = arr[j];
      invCount += (mid - i);
      ++k;
      ++j;
    }
  }

  while (i < mid) {
    temp[k] = arr[i];
    ++k;
    ++i;
  }

  while (j <= right) {
    temp[k] = arr[j];
    ++k;
    ++j;
  }

  for (i = left, k = 0; i <= right; i++, k++) {
    arr[i] = temp[k];
  }

  return invCount;
}
long long mergeSort(long long arr[], int left, int right) {
  long long invCount = 0;

  if (right > left) {
    int mid = (right + left) / 2;
    invCount = mergeSort(arr, left, mid);
    invCount += mergeSort(arr, mid + 1, right);
    invCount += merge(arr, left, mid + 1, right);
  }
  return invCount;
}

long long getInversions(long long arr[], int n) {
  return mergeSort(arr, 0, n - 1);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    long long ara[n];
    for(int i = 0; i < n; i++){
        cin>>ara[i];
    }

    int left = 0;
    int right = n;
    int mid = n / 2;

    long long ans = getInversions(ara, n);
    cout<<ans<<"\n";

return 0;
}
