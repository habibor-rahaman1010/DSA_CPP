// ofstream in c++

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream print;
    print.open("1.txt");
    print<< "Hello programmer. what\'s up!";

    print.close();
return 0;
}
