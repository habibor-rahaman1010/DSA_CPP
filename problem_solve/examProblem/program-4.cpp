#include <iostream>
#include <algorithm>
using namespace std;

int mergeSort(int arr[], int temp[], int left, int right, int k)
{
    int mid, inv_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;

        inv_count = mergeSort(arr, temp, left, mid, k);
        inv_count += mergeSort(arr, temp, mid + 1, right, k);

        int i = left, j = mid + 1, k = left;
        int h = 0;
        while (i <= mid && j <= right)
        {
            if (arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
            {
                temp[k++] = arr[j++];
                h++;

                //counting the number of pairs
                inv_count += (mid - i + 1);
            }
        }
        cout<<h <<"\n";

        while (i <= mid)
            temp[k++] = arr[i++];

        while (j <= right)
            temp[k++] = arr[j++];

        for (i = left; i <= right; i++)
            arr[i] = temp[i];
    }
    return inv_count;
}

int sumPairs(int arr[], int n, int k)
{
    int temp[n];
    return mergeSort(arr, temp, 0, n - 1, k);
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;

    cout << sumPairs(arr, n, k) << endl;
    return 0;
}
