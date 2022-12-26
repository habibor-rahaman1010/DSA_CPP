//break in c++ program...

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout<< "Enter the value of n: ";
    cin>> n;

    while(i <= n){
        cout<< i << endl;
        i++;
        if(i == 5){
            break;
        }
    }

return 0;
}
