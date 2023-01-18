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

    //Insert item at linked list any index...
    void InsertAtAnyIndex(int index, int item) {
        if(index < 0 || index > getLength()){
            return;
        }

        if(index == 0){
            InsertAtHead(item);
            return;
        }
        Node* a = head;
        int current_index = 0;
        while(current_index != index - 1){
            a = a->nxt;
            current_index++;
        }
        Node* new_node = Create_Node(item);
        new_node->nxt = a->nxt;
        new_node->prv = a;
        Node* b = a->nxt;
        b->prv = new_node;
        a->nxt = new_node;

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

int main() {
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.InsertAtHead(50);

    //dl.InsertAtAnyIndex(1, 100);
    dl.InsertAtAnyIndex(5, 200);

    dl.Traverse();
    cout<<"Length is: " <<dl.getLength() <<"\n";

return 0;
}
