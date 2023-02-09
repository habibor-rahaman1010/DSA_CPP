//stack implement in c++ program use singly linked list...

#include <iostream>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node *next;
};

template<class T>
class SinglyLinkedList {
public:
    Node<T>* head;

    SinglyLinkedList(){
        head = NULL;
    }

    Node<T>* Create_Node(T item) {
        Node<T>* new_node = new Node<T>;
        new_node->data = item;
        new_node->next = NULL;
        return new_node;
    }

    //Insert item at linked list head...
    void InsertAtHead(T item) {
        Node<T> *new_node = Create_Node(item);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node<T>* a = head;
        new_node->next = a;
        head = new_node;
    }

    //delete at head...
    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        Node<T> *a = head;
        head = a->next;
        delete a;
    }

    //This function return to the singly linked list length...
    int getLength() {
        Node<T>* a = head;
        int countt = 0;
        while(a != NULL){
            a = a->next;
            countt++;
        }
        return countt;
    }
};

template<class T>
class Stack{
public:
    SinglyLinkedList<T> sl;

    Stack() {

    }

    void push(T item){
        sl.InsertAtHead(item);
    }

    void pop(){
        if(sl.getLength() == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        sl.deleteAtHead();
    }

    T top(){
        if(sl.getLength() == 0){
            cout<<"Stack is empty! \n";
            T a;
            return a;
        }
        return sl.head->data;
    }
};

int main() {
    Stack<string> st;
    st.push("C++");
    st.push("C#");
    st.push("Python");
    st.push("Data Structure");
    st.push("Algorithm");

    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";
    st.pop();
    cout<<st.top() <<"\n";

return 0;
}
