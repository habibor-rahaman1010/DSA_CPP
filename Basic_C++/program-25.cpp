//string access in c++ program...

#include <iostream>
using namespace std;

int main() {
    string text = "At the end of the day my \"hard work\", give me lot of opportunity";
    cout<< text[0] <<endl;
    cout<< text[12] <<endl;
    cout<< text <<endl;

    //change character in text string...
    text[1] = 'T';
    text[3] = 'T';
    cout<< text <<endl;

return 0;
}
