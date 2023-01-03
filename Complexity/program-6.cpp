//Fibonacci program time and space complexity find out in c++ program...

#include <iostream>
using namespace std;

int called = 0;
int fibo(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    int x = fibo(n - 1);
    called++;
    int y = fibo(n - 2);
    called++;
    return (x + y);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fib = fibo(n);
    cout<<"Fibonacci is: " <<fib <<"\n";
    cout<<"Fibonacci function called: " <<called <<"\n";

return 0;
}
