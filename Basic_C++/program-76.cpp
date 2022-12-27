//reference in c++...

#include <iostream>
using namespace std;

int main() {
    string food = "Chicken Fry";
    string &meal = food;
    cout<< food <<"\n";
    cout<< meal << "\n";

    //memory address to the variable...
    cout<<&food <<"\n";
    cout<<&meal <<"\n";

return 0;
}
