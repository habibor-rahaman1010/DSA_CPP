#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>ara;

    int numer[n + 1];
    for(int i = 1; i <= n; i++){
        numer[i] = 0;
    }
    for(int i=0; i<n-1; i++){
        int k;
        cin >> k;
        ara.push_back(k);
        numer[k] = 1;
    }

    for(int i = 1; i <= n; i++){
       if(numer[i] == 0){
            cout << i << endl;
            break;
       }
    }

    return 0;
}

