//stack implement using dynamic array and STL template in c++ program...

#include <iostream>
using namespace std;

template<class T>
class Stack{
public:
    T *ara;
    int stack_capacity;
    int stack_size;

    Stack(){
        ara = new T[1];
        stack_capacity = 1;
        stack_size = 0;
    }

    //increase the stack capacity...
    void increse_capacity(){
        T *temp = new T[stack_capacity * 2];
        for(int i = 0; i < stack_capacity; i++){
            temp[i] = ara[i];
        }
        swap(ara, temp);
        delete []temp;
        stack_capacity = stack_capacity * 2;
    }

    //push element in the stack O(1)
    void push(T item){
        if(stack_size + 1 > stack_capacity){
            increse_capacity();
        }
        stack_size = stack_size + 1;
        ara[stack_size - 1] = item;
    }

    //pop element in the stack O(1)
    void pop(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        ara[stack_size - 1] = 0; // its mean there memory address value assigning 0;
        stack_size = stack_size - 1;
    }

    //top element return the stack O(1)
    T top(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            T Titem;
            return Titem;
        }
        return ara[stack_size - 1];
    }
};

int main(){
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

