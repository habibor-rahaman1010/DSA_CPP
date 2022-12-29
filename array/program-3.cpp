// array in c++ program...input from user multiplication of array...

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
    int mul = 1;
    for(int i = 0; i < n; i++){
        int value = ara[i];
        mul *=value;
    }
    cout<<"multiply is: "<<mul <<"\n";

return 0;
}
