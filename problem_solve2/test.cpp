#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string text, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (text[start] != text[end]) {
        return false;
    }
    return isPalindrome(text, start + 1, end - 1);
}

int main() {
    string text;
    cout<<"Enter the value of text: ";
    cin>>text;

    if (isPalindrome(text, 0, text.length() - 1)) {
        cout<< "Yes" << "\n";
    } else {
        cout<< "No" << "\n";
    }

return 0;
}
