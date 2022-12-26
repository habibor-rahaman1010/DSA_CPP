//continue in c++ program get odd number...

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout<< "Enter the value of n: ";
    cin>> n;

    while(i < n){
        i++;
        if(i % 2 == 0){
            continue;
        }
        cout<< i << endl;
    }

return 0;
}

