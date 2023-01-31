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
        new_node->nxt = NULL;
        new_node->prv = NULL;
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
        new_node->nxt = a;
        a->prv = new_node;
        head = new_node;
    }

    //Traverse the doubly linked list...
    void Traverse(){
        Node* a = head;
        while(a != NULL){
            cout<<a->data <<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //This function return to the doubly linked list length...
    int getLength() {
        Node* a = head;
        int countt = 0;
        while(a != NULL){
            a = a->nxt;
            countt++;
        }
        return countt;
    }
};

class Stack{

};

int main() {


return 0;
}

