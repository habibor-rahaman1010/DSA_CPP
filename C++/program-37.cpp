// short hand if else statement in c++ program...

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    string ans = (n > 9) ? "True" : "False";
    cout<< ans << endl;

    bool cond = true;
    string play = (cond) ? "I play football to you" : "I cant't football to you";
    cout<< play << endl;

    bool cond2 = true;
    string play2 = (!cond2) ? "I play football to you" : "I cant't football to you";
    cout<< play2 << endl;

    int x = 5;
    (x > 4) ? cout<< "True" << endl : cout<< "False" << endl;

return 0;
}
