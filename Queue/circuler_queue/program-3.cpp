#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 1;i <= 5;i++)
        v.push_back(i);
    v.pop_back();
    cout << v.size() << '\n';
    v.push_back(5 * 5);
    return 0;
}
