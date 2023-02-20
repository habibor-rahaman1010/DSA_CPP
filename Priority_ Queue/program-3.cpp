//Priority Queue problem solve...

#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int digit(int x){
    int countt = 0;
    while(x != 0){
        x = x / 10;
        countt++;
    }
    return countt;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>a(n);
    vector<int>b(n);

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        cin>>b[i];
    }

    priority_queue<int>p1;
    priority_queue<int>p2;

    for(int i = 0; i < n; i++){
        p1.push(a[i]);
        p2.push(b[i]);
    }

    int ans = 0;
    while(p1.size()){
        int x = p1.top();
        int y = p2.top();
        if(x == y){
            p1.pop();
            p2.pop();
            continue;
        }

        ans++;
        if(x > y){
            p1.pop();
            p1.push(digit(x));
        }
        else{
            p2.pop();
            p2.push(digit(y));
        }
    }
    cout<<ans <<"\n";


return 0;
}
