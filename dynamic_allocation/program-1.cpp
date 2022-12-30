//dynamic memory allocation in c++ program...

#include <iostream>
using namespace std;

int main() {
    int *n = new int;
    cout<< n <<"\n";
    cout<<*n <<"\n";

    *n = 14;
    cout<<*n <<"\n";

    int *x = new int;
    int *y = new int;
    int *z = new int;

    //assign value in variable...
    *x = 12;
    *y = 16;
    *z = *x + *y;
    cout<<"sum is: " <<*z <<"\n";

    //print memory address...
    cout<<x <<"\n";
    cout<<y <<"\n";
    cout<<z <<"\n";

    //free or delete all declared memory, is good practice for dynamic memory allocation...
    delete n;
    delete x;
    delete y;
    delete z;

return 0;
}
