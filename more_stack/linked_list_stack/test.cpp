#include <iostream>
using namespace std;

template<class T>
class Stack{
public:
	T *ara;
	int capacity;
	int stack_size;

	Stack(){
    	ara = new T[1];
    	capacity = 1;
    	stack_size = 0;
	}

	//stack capacity increase here...
	void Increase(){
    	T *temp;
    	temp = new T[capacity * 2];
    	for(int i = 0; i < capacity; i++){
        	temp[i] = ara[i];
    	}
    	swap(ara, temp);
    	delete[] temp;
    	capacity = capacity * 2;
	}

	//Add element in the stack...
	void push(T item){
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
    	stack_size = stack_size - 1;
	}

	//Top return the stack top most item...
	T top(){
    	if(stack_size == 0){
       	cout<<"Stack is empty! \n";
       	T a;
       	return a;
    	}
    	return ara[stack_size - 1];
	}
};

int main() {
	Stack<char>character;
    Stack<int>integer_number;
    Stack<float>float_number;

return 0;
}

