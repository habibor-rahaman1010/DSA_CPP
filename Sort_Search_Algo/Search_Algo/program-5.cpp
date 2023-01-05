//Sentinel Linear Search algorithm in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Sentinel_Linear_Search(vector<int>ara, int q) {
    sort(ara.size(), ara.end());
    int last = ara[ara.size() - 1];
    ara[ara.size() - 1] = q;

    int i = 0;
    while(ara[i] != q){
        i++;
    }
    ara[ara.size() - 1] = last;
    if((i < ara.size() - 1) || (ara[ara.size() - 1] == q)){
        return 1;
    }
    return -1;
}

int main() {
    int n, q;
    cout<<"Enter the value of (n and q): ";
    cin>>n >>q;

    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int result = Sentinel_Linear_Search(ara, q);
    if(result != -1){
        cout<<"Yes find out \n";
    }
    else{
        cout<<"Not found \n";
    }

return 0;
}
