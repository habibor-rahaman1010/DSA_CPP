//string length in c++ program...

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char text[] = "Hello world";
    string text2 = "Hello programmer how can i help you?";

    cout<< text <<endl;
    cout<< text2 <<endl;

    cout<< "text length: " << strlen(text) <<endl;
    cout<< "text2 length: " << text2.length() <<endl;
    cout<< "text2 length: " << text2.size() <<endl;


return 0;
}
