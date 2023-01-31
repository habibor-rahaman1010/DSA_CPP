//stack implement in c++ program use doubly linked list...

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *privious;
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList(){
        head = NULL;
    }

    Node* Create_Node(int item) {
        Node* new_node = new Node;
        new_node->data = item;
        new_node->next = NULL;
        new_node->privious = NULL;
        return new_node;
    }

    //Insert item at linked list head...
    void InsertAtHead(int item) {
        Node *new_node = Create_Node(item);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* a = head;
        new_node->next = a;
        a->privious = new_node;
        head = new_node;
    }

    //delete at head...
    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        Node *a = head;
        Node *b  = head->next;
        delete a;
        if(b != NULL){
            b->privious = NULL;
        }
        head = b;
    }

    //This function return to the doubly linked list length...
    int getLength() {
        Node* a = head;
        int countt = 0;
        while(a != NULL){
            a = a->next;
            countt++;
        }
        return countt;
    }
};

class Stack{
public:
    DoublyLinkedList dl;

    Stack() {

    }

    void push(int item){
        dl.InsertAtHead(item);
    }

    void pop(){
        if(dl.getLength() == 0){
            cout<<"Stack is empty! \n";
            return;
        }
        dl.deleteAtHead();
    }

    int top(){
        if(dl.getLength() == 0){
            cout<<"Stack is empty! \n";
            return -1;
        }
        return dl.head->data;
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
