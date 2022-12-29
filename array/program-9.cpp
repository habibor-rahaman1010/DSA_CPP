//string and function in c++ program...

#include <iostream>
using namespace std;

namespace text {
    void changeString(string &s) {
        s.pop_back(); // remove last character
        s.erase(s.begin() + s.size() - 1); // remove last character
        s.erase(s.begin()); // remove first character
        s.erase(s.begin() + 2); // remove 3rd character
    }

    void Swap(int &x, int &y) {
        int n = x;
        x = y;
        y = n;
    }
}

int main() {
    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    text::changeString(s);
    cout<< s <<"\n";

    int q, r;
    cout<<"Enter value (q and r): ";
    cin>>q >>r;
    text::Swap(q, r);

    cout<<"q = " <<q <<"\n";
    cout<<"r = " <<r <<"\n";

return 0;
}
