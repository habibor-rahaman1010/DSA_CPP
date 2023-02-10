#include <iostream>
#include <deque>
using namespace std;

bool isPalindrome(string word){
    deque<char> d;

    for (char c : word){
        d.push_back(c);
    }

    while (d.size() > 1){
        if (d.front() != d.back()){
            return false;
        }
        d.pop_front();
        d.pop_back();
    }

    return true;
}

int main()
{
    string text;
    cin>> text;

    if(isPalindrome(text) == true){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }

return 0;
}
