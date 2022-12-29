// basic write operation in file by c++...

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream MyFile("hello.txt");
    MyFile<< "Hello programmer, how can i help you?";

    MyFile.close();

return 0;
}
