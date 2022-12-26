//print 1 to n even number use while loop in c++ program...

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout<< "Enter the value of n: ";
    cin>> n;

    while(i <= n){
       if(i % 2 == 0){
            cout<< i << endl;
       }
       i++;
    }

return 0;
}
