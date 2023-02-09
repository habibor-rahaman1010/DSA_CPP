#include <iostream>
#include <stack>
#include <string>
using namespace std;

int checked_operator(char c) {
    if (c == '^'){
       return 3;
    }
    else if (c == '*' || c == '/'){
        return 2;
    }

    else if (c == '+' || c == '-'){
        return 1;
    }

    else{
        return -1;
    }
}

string infixToPostfix(string exp) {
    string postfix = "";
    stack<char> s;
    s.push('N');
    int length = exp.length();
    for (int i = 0; i < length; i++) {
        if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
            postfix += exp[i];
        else if (exp[i] == '('){
             s.push('(');
        }
        else if (exp[i] == ')') {
            while (s.top() != 'N' && s.top() != '(') {
                char c = s.top();
                s.pop();
                postfix += c;
            }
            if (s.top() == '(') {
                char c = s.top();
                s.pop();
            }
        }
        else {
            while (s.top() != 'N' && checked_operator(exp[i]) <= checked_operator(s.top())) {
                char c = s.top();
                s.pop();
                postfix += c;
            }
            s.push(exp[i]);
        }
    }

    while (s.top() != 'N') {
        char c = s.top();
        s.pop();
        postfix += c;
    }
    return postfix;
}

int main() {
    string expression = "a+(b+c)*d-e";
    string expression2 = "(a+b)*(c+d)";

    cout<< infixToPostfix(expression) <<"\n";
    cout<< infixToPostfix(expression2) <<"\n";

return 0;
}
