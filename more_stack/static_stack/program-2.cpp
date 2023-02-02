//stack implement using static array and STL template in c++ program...

#include <iostream>
using namespace std;

const int MAX_SIZE = 500;

template<class T>
class Stack{
public:
    int ara[MAX_SIZE];
    int stack_size;

    Stack(){
        stack_size = 0;
    }

    //push an element in the stack... O(1)
    void push(T item){
        if(stack_size + 1 > MAX_SIZE){
            cout<<"Stack is full! \n";
            return;
        }
        stack_size = stack_size + 1;
        ara[stack_size - 1] = item;
    }

    //pop an element in the stack... O(1)
    void pop(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        ara[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    //return top element in the stack... O(1)
    T top(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            T Titem;
            return Titem;
        }
        return ara[stack_size - 1];
    }

};


int main() {
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

return 0;
}
