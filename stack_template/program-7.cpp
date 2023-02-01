//stack implement in c++ program using array and c++ template...

#include <iostream>
using namespace std;

const int MAX_SIZE = 500;

template<class T>
class Stack{
public:
    T ara[MAX_SIZE];
    int stack_Size;

    Stack(){
        stack_Size = 0;
    }

    //push element in stack...O(1)
    void push(T item){
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
    T top(){
        if(stack_Size == 0){
            cout<<"Stack is empty \n";
            T a;
            return a;
        }
        return ara[stack_Size - 1];
    }
};

int main() {
    Stack<int> st;
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
