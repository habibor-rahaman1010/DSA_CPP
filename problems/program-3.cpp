#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to return the precedence of operators
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string exp) {
    string postfix = "";
    stack<char> s;
    s.push('N');
    int length = exp.length();
    for (int i = 0; i < length; i++) {
        // If the scanned character is an operand, add it to output
        if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
            postfix += exp[i];
        // If the scanned character is an '(' , push it to the stack
        else if (exp[i] == '(')
            s.push('(');
        // If the scanned character is an ')' , pop and output from the stack until and '(' is encountered
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
        } else {
            // If the scanned character is an operator
            while (s.top() != 'N' && prec(exp[i]) <= prec(s.top())) {
                char c = s.top();
                s.pop();
                postfix += c;
            }
            s.push(exp[i]);
        }
    }

    // Pop all the remaining elements from the stack
    while (s.top() != 'N') {
        char c = s.top();
        s.pop();
        postfix += c;
    }
    return postfix;
}

// Main function
int main() {
    string exp = "(a+b)*(c+d)";
    cout << "Infix Expression: " << exp << endl;
    cout << "Postfix Expression: " << infixToPostfix(exp) << endl;
    return 0;
}
