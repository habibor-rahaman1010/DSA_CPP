// array in c++ program...input from user...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    int ara[n];

    for(int i = 0; i < n; i++) {
        cin>>ara[i];
    }

    cout<< "\n";
    for(int i = 0; i < n; i++){
        int value = ara[i];
        cout<<value <<"\n";
    }

return 0;
}
