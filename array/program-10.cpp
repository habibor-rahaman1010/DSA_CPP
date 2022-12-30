//pointer in c++ program...

#include <iostream>
using namespace std;

int getSum(int* x, int* y) {
    int ans;
    int* sum = &ans;
    *sum = *x + *y;
    return *sum;

}

int main() {
    int a, b;
    cout<<"Enter the value of (a and b): ";
    cin>>a >>b;

    int* x = &a;
    int* y = &b;
    int result;
    int *summation = &result;
    *summation = getSum(x, y);

    cout<<"summation is: " <<*summation;

return 0;
}
