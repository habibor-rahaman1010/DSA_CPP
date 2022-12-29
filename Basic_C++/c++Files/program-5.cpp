//read file in c++

#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    while("input.txt" != "\n"){
        string text;
        getline(cin, text);
        cout<< text;
    }

return 0;
}
