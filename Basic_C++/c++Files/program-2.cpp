//file read in c++

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string myText;
    ifstream MyReadFile("hello.txt");

    while(getline(MyReadFile, myText)){
        cout<< myText;
    }

return 0;
}
