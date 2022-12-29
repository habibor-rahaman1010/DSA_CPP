// string input from user in c++ program..

#include <iostream>
using namespace std;

int main() {
    string text;
    cout<<"Enter your text: ";
    getline(cin, text);

    //remove last character...
    text.pop_back();
    cout<<text <<"\n";

    //remove first character...
    text.erase(text.begin());
    cout<<text <<"\n";

    //remove last character...
    text.erase(text.begin() + text.size() - 1);
    cout<<text <<"\n";


return 0;
}
