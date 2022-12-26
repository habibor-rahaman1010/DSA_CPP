//print 1 to n number use while loop in c++ program...

#include <iostream>
using namespace std;

int main() {
    int i = 1, n;
    cout<< "Enter the value of n: ";
    cin>> n;

    while(i <= n){
        cout<< i << endl;
        i++;
    }

return 0;
}
