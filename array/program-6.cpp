//string in c++ program...

#include <iostream>
using namespace std;

int main() {
    string text = "I love Bangladesh. I living in Bangladesh.";

    //remove last element of a string...
    text.pop_back();
    cout<<text <<"\n";

    //remove first element of a string...
    text.erase(text.begin());
    cout<<text <<"\n";

    //remove any element of a string...
    text.erase(text.begin() + 3);
    cout<<text <<"\n";

return 0;
}
