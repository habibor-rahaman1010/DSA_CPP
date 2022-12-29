// file read and out to other file...

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream in("file1.txt");
    ofstream f("file2.txt");

    while(!in.eof()){
        string text;
        getline(in, text);
        f << text << endl;
    }
    in.close();
    f.close();
return 0;
}

