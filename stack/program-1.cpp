//stack implement in c++ program using array...

#include <iostream>
using namespace std;

const int MAX_SIZE = 500;

class Stack{
public:
    int ara[MAX_SIZE];
    int stack_Size;

    Stack(){
        stack_Size = 0;
    }

    //push element in stack...O(1)
    void push(int item){
        if(stack_Size + 1 > MAX_SIZE){
            cout<<"Stack is full! \n";
            return;
        }
        stack_Size = stack_Size + 1;
        ara[stack_Size - 1] = item;
    }

    //pop the topmost element from stack... O(1)
    void pop(){
        if(stack_Size == 0){
            cout<<"Stack is empty \n";
            return;
        };

        ara[stack_Size - 1] = 0;
        stack_Size = stack_Size - 1;
    }

    //Return the top element from the stack...
    int top(){
        if(stack_Size == 0){
            cout<<"Stack is empty \n";
            return - 1;
        }
        return ara[stack_Size - 1];
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";

return 0;
}
