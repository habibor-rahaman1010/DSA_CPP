// array in c++ program...input from user sum of array...

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
    int sum = 0;
    for(int i = 0; i < n; i++){
        int value = ara[i];
        sum +=value;
    }
    cout<<"sum is: "<<sum <<"\n";

return 0;
}
