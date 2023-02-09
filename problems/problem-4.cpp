#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int operation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int evaluate(char expression[]) {
    stack<int> values;
    stack<char> operators;

    for (int i = 0; i < strlen(expression); i++) {
        if (expression[i] == ' ') continue;
        if (expression[i] >= '0' && expression[i] <= '9') {
            int val = 0;
            while (i < strlen(expression) && expression[i] >= '0' && expression[i] <= '9') {
                val = val * 10 + (expression[i] - '0');
                i++;
            }
            i--;
            values.push(val);
        }
        else if (expression[i] == '(') {
            operators.push(expression[i]);
        }
        else if (expression[i] == ')') {
            while (operators.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(operation(a, b, op));
            }
            operators.pop();
        }
        else {
            while (!operators.empty() && operators.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(operation(a, b, op));
            }
            operators.push(expression[i]);
        }
    }

    while (!operators.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = operators.top(); operators.pop();
        values.push(operation(a, b, op));
    }

    return values.top();
}

int main() {
    char expression[100];
    cout << "Enter the expression: ";
    cin >> expression;
    cout<< evaluate(expression) << "\n";
    return 0;
}

