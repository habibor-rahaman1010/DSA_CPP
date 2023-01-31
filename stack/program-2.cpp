//stack implement in c++ program using dynamic array...

#include <iostream>
using namespace std;

class Stack{
public:
    int *ara;
    int stack_size;
    int capacity;

    Stack(){
        ara = new int[1];
        capacity = 1;
        stack_size = 0;
    }

    void increase_size(){
        int *temp;
        temp = new int[capacity * 2];
        for(int i = 0; i < capacity; i++){
            temp[i] = ara[i];
        }
        swap(ara, temp);
        delete[] temp;
        capacity = capacity * 2;
    }

    //push implement in stack...
    void push(int item){
        if(stack_size + 1 > capacity){
            increase_size();
        }
        stack_size = stack_size + 1;
        ara[stack_size - 1] = item;
    }

    //pop implement in pop
    void pop(){
        if(stack_size == 0){
           cout<<"Stack is empty! \n";
           return;
        }
        ara[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

     //Return the top element from the stack...
     int top(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            return -1;
        }
        return ara[stack_size - 1];
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
