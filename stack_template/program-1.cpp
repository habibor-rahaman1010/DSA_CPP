//stack implement in c++ program using c++ template

#include <iostream>
using namespace std;

class Stack{
public:
    int *ara;
    int capacity;
    int stack_size;

    Stack(){
        ara = new int[1];
        capacity = 1;
        stack_size = 0;
    }

    //stack capacity increase here...
    void Increase(){
        int *temp;
        temp = new int[capacity * 2];
        for(int i = 0; i < capacity; i++){
            temp[i] = ara[i];
        }
        swap(ara, temp);
        delete[] temp;
        capacity = capacity * 2;
    }

    //Add element in the stack...
    void push(int item){
        if(stack_size + 1 > capacity){
            Increase();
        }
        stack_size = stack_size + 1;
        ara[stack_size - 1] = item;
    }

    //Pop element in the stack...
    void pop(){
        if(stack_size == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        ara[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    //Top return the stack top most item...
    int top(){
        if(stack_size == 0){
           cout<<"Stack is empty! \n";
           return -1;
        }
        return ara[stack_size - 1];
    }
};

int main() {


return 0;
}
