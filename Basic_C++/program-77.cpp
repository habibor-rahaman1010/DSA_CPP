//pointer in c++...

#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    //extract value in variable...
    cout<< food <<"\n";
    cout<< *ptr <<"\n";

    //extract value in variable...
    cout<< &food <<"\n";
    cout<< ptr <<"\n";
    cout<< &ptr <<"\n"; //its ptr pointer self address

return 0;
}
