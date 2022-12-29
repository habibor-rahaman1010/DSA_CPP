// ofstream in c++ program...

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream print;
    print.open("one.txt");

    ofstream print2;
    print2.open("two.txt");

    print<< "Hello programmer. what\'s up!";
    print2<< "I'm so hungry please give me some meal.";

    print.close();
    print2.close();
return 0;
}

