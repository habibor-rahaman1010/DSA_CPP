//doubly linked list in c++ program...

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* nxt;
    Node* prv;
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
    }
};

int main() {
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);

    dl.Traverse();

return 0;
}
