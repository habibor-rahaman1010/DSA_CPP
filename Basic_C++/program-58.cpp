// array in c++ program...

#include <iostream>
using namespace std;

int main() {
    int ara[5] = {34, 45, 67, 56, 78};

    // reassign value in array...use array index expression...
    ara[0 * 1] = 12;
    ara[1 + 1 - 1] = 16;
    ara[2 - 1 + 1] = 9;
    ara[3 * 1] = 8;
    ara[(4 - 3) * 4] = 10;

    cout<< ara[0] <<"\n";
    cout<< ara[1] <<"\n";
    cout<< ara[2] <<"\n";
    cout<< ara[3] <<"\n";
    cout<< ara[4] <<"\n";


return 0;
}
