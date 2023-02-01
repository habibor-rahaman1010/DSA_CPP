//stack implement in c++ program use doubly linked list...

#include <iostream>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node *next;
    Node *privious;
};

template<class T>
class DoublyLinkedList {
public:
    Node<T>* head;

    DoublyLinkedList(){
        head = NULL;
    }

    Node<T>* Create_Node(T item) {
        Node<T>* new_node = new Node<T>;
        new_node->data = item;
        new_node->next = NULL;
        new_node->privious = NULL;
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
        a->privious = new_node;
        head = new_node;
    }

    //delete at head...
    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        Node<T> *a = head;
        Node<T> *b  = head->next;
        delete a;
        if(b != NULL){
            b->privious = NULL;
        }
        head = b;
    }

    //This function return to the doubly linked list length...
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
    DoublyLinkedList<T> dl;

    Stack() {

    }

    void push(T item){
        dl.InsertAtHead(item);
    }

    void pop(){
        if(dl.getLength() == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        dl.deleteAtHead();
    }

    T top(){
        if(dl.getLength() == 0){
            cout<<"Stack is empty! \n";
            T a;
            return a;
        }
        return dl.head->data;
    }
};

int main() {
    Stack<string> st;
    st.push("C++");
    st.push("C#");
    st.push("Python");
    st.push("Data Strucutre");
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
    st.pop();

return 0;
}

