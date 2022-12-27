// array in loop in c++ program...

#include <iostream>
using namespace std;

int main() {
    int number[] = {12, 34, 56, 100, 33, 44, 78, 99, 101, 98};
    int length = sizeof(number) / sizeof(number[0]);

    for(int i = 0; i < sizeof(number) / sizeof(number[0]); i++){
        int value = number[i];
        cout<< value <<"\n";
    }

return 0;
}

