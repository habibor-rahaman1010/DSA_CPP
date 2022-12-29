//file input and out other file in c++ program...

//  ofstream and ifstream in c++ program...

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;
    ifstream program;
    program.open("demo.txt");

    ofstream write;
    write.open("demoData.txt");

    while(!program.eof()){
        getline(program, data);
        write<< data <<"\n";
    }

    program.close();
    write.close();
return 0;
}

