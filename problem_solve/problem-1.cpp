#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;
    vector<int>ara;
    ara.resize(n);

    for(int i = 0; i < n; i++){
        cin>> ara[i];
    }
    sort(ara.begin(), ara.end());

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(i == 0){
            ans++;
            continue;
        }
        if(ara[i] != ara[i - 1]){
            ans++;
        }
    }
    cout<< ans;


return 0;
}
