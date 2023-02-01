//sort a stack using another temporary stack in c++ program...

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

    //Traverse
    void Traverse(){
        Node<T>* a = head;
        while(a != NULL){
            cout<<a->data <<" ";
            a = a->next;
        }
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
    int stackGetLength(){
        return dl.getLength();
    }
};

int main() {
    Stack<int> st;
    st.push(12);
    st.push(10);
    st.push(5);
    st.push(20);
    st.push(42);
    st.push(5);
    st.push(1);
    st.push(55);

    Stack<int>temp;
    while(st.stackGetLength() > 0){
        int t = st.top();
        st.pop();
        while(temp.stackGetLength() > 0){
            if(temp.top() <= t){
                break;
            }
            st.push(temp.top());
            temp.pop();
        }
        temp.push(t);
    }
    swap(st, temp);
    st.dl.Traverse();

return 0;
}
