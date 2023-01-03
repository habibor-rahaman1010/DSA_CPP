//Binary search in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int low = 0, heigh = n - 1;
    bool flag = 0;
    while(low <= heigh){
        int mid = (low + heigh) / 2;
        cout<<"Low = " <<low <<" " <<"Height = " <<heigh <<" " <<"Mid = " <<mid <<"\n";

        if(ara[mid] == k){
            cout<<"Yes! \n";
            flag = 1;
            break;
        }

        if(ara[mid] > k){
            heigh = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(!flag){
        cout<<"No! \n";
    }

/*  if(flag == 0){
        cout<<"No! \n";
    } */

return 0;
}
