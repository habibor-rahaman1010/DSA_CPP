//file read in c++

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string myText;
    ifstream MyReadFile("input.txt");
    ofstream MyFile("output.txt");

    while(!MyReadFile.eof()){
        getline(MyReadFile, myText);
        MyFile<< myText << "\n";
    }

    MyFile.close();

    MyReadFile.close();
return 0;
}

