// simple math use pointer in c++ program...

#include <iostream>
using namespace std;

int main() {

    int x = 14, y = 16, ans = 0;
    int * ptr = &x;
    int* ptr2 = &y;
    int* sum = &ans;

    *sum = *ptr + *ptr2;
    cout<< *sum;

return 0;
}
