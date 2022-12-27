//for etch loop in string array in c++ program...

#include <iostream>
using namespace std;

int main() {
    string cars[] = {"Toyota", "Lamborghini", "BMW", "Volkswagen", "Audi", "Marcidis"};

    for(string car : cars){
        cout<< car << "\n";
    }

return 0;
}
