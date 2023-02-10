#include <iostream>
#include <stack>
#include <string>

using namespace std;

int perform_operation(int operand1, int operand2, char operation) {
  if (operation == '+') return operand1 + operand2;
  else if (operation == '-') return operand1 - operand2;
  else if (operation == '*') return operand1 * operand2;
  else if (operation == '/') return operand1 / operand2;
  else return -1;
}

int evaluate_expression(string expression) {
  stack<int> operands;
  stack<char> operations;

  for (int i = 0; i < expression.length(); i++) {
    if (expression[i] == ' ') continue;
    else if (expression[i] >= '0' && expression[i] <= '9') {
      int operand = 0;
      while (i < expression.length() && expression[i] >= '0' && expression[i] <= '9') {
        operand = operand * 10 + (expression[i] - '0');
        i++;
      }
      i--;
      operands.push(operand);
    } else if (expression[i] == '(') operations.push(expression[i]);
    else if (expression[i] == ')') {
      while (operations.top() != '(') {
        int operand2 = operands.top();
        operands.pop();
        int operand1 = operands.top();
        operands.pop();
        char operation = operations.top();
        operations.pop();
        operands.push(perform_operation(operand1, operand2, operation));
      }
      operations.pop();
    } else {
      while (!operations.empty() && operations.top() != '(') {
        int operand2 = operands.top();
        operands.pop();
        int operand1 = operands.top();
        operands.pop();
        char operation = operations.top();
        operations.pop();
        operands.push(perform_operation(operand1, operand2, operation));
      }
      operations.push(expression[i]);
    }
  }

  while (!operations.empty()) {
    int operand2 = operands.top();
    operands.pop();
    int operand1 = operands.top();
    operands.pop();
    char operation = operations.top();
    operations.pop();
    operands.push(perform_operation(operand1, operand2, operation));
  }

  return operands.top();
}

int main() {
  string expression = "4+(5+6)*8-1";
  cout << evaluate_expression(expression) << endl;
  expression = "(2+4)*(5+6)";
  cout << evaluate_expression(expression) << endl;
  return 0;
}

