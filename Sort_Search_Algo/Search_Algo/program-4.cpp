//Binary search algorithm in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>ara, int q) {
    sort(ara.begin(), ara.end());
    int low = 0;
    int heigh = ara.size() - 1;

    while(low <= heigh){
        int mid = (low + heigh) / 2;
        if(ara[mid] == q){
            return 1;
            break;
        }
        if(ara[mid] > q){
            heigh = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, q;
    cout<<"Enter the value of (n and q): ";
    cin>>n >>q;

    vector<int>ara(n + 1);
    for(int i = 1; i < ara.size(); i++){
        cin>>ara[i];
    }

    int result = binarySearch(ara, q);
    if(result != -1){
        cout<<"Yes! find out element " <<ara[q] <<"\n";
    }
    else{
         cout<<"No! does not find out element " <<result <<"\n";
    }

return 0;
}
