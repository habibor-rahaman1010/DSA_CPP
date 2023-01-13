#include<iostream>
using namespace std;

int main() {
    int n, total, x, sum = 0;
    cin >> n;

    total = (n*(n + 1)) / 2;

    for(int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    cout << total - sum << endl;

    return 0;
}

