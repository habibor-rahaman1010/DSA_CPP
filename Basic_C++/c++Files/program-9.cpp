// ifstream in c++ program...

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;
    ifstream program;
    program.open("demo.txt");

    while(!program.eof()){
        getline(program, data);
        cout<< data <<"\n";
    }

    program.close();
return 0;
}
