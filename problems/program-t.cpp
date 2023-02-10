#include <iostream>
#include <stack>
using namespace std;

int operator_check(char ch){
    if (ch == '+' || ch == '-'){
        return 1;
    }
    else if (ch == '*' || ch == '/'){
        return 2;
    }
    else{
        return -1;
    }
}

int operand(int x, int y, char ch){
    if(ch == '+'){
        return x + y;
    }
    else if(ch == '-'){
        return x - y;
    }
    else if(ch == '*'){
        return x * y;
    }
    else if(ch == '/'){
        return x / y;
    }
    else{
        return -1;
    }
}

//4+(5+6)*8-1
//(2+4)*(5+6)
int main(){
    string expression;
    cin >> expression;
    string ans = "";
    stack<char> st;
    for (int i = 0; i < expression.size(); i++){
        char current = expression[i];
        if (current >= '0' && current <= '9'){
            ans += current;
        }
        else if (current == '('){
            st.push(current);
        }
        else if (current == ')'){
            while (st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (st.size() && operator_check(st.top()) >= operator_check(current)){
                ans += st.top();
                st.pop();
            }
            st.push(current);
        }
    }
    while (st.size()){
        ans += st.top();
        st.pop();
    }

    stack<int>st2;
    int result = 0;
    for(int i = 0; i < ans.size(); i++){
        char current2=ans[i];
        if(current2 >= '0' && current2 <= '9'){
            int val=current2-48;
            st2.push(val);
        }
        else{
            int value2 = st2.top();
            st2.pop();
            int value1 = st2.top();
            st2.pop();
            result = operand(value1, value2, current2);
            st2.push(result);
        }
    }
    cout<<result<<"\n";
    return 0;
}

