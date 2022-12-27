//string array in c++

// array in c++ program...

#include <iostream>
using namespace std;

int main() {
    string ara[5] = {"Naymer", "Ronaldo", "Antony", "Rodrigo", "Silva"};

    // reassign value in array...use array index expression...
    ara[0 * 1]= "Habibor Rahaman";
    ara[2 - 1 + 1] = "Wahidur Rahman";
    ara[2 - 1 + 1] = "Developper";
    ara[3 * 1] = "Programmer";
    ara[(4 - 3) * 4] = "C++ Program";

    cout<< ara[0] <<"\n";
    cout<< ara[1] <<"\n";
    cout<< ara[2] <<"\n";
    cout<< ara[3] <<"\n";
    cout<< ara[4] <<"\n";


return 0;
}



