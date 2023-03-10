//conceptual session linked list practice

#include <iostream>
using namespace std;

class Node {
    public:
        int Data;
        Node* Next;

        Node(int value){
            this->Data = value;
            this->Next = NULL;
        }
};

//insert at head in linked list...
void InsertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        return;
    }
    new_node->Next = head;
    head = new_node;
}

//print the linked list...
void Print_linked_List(Node* head){
    Node* a = head;
    while(a != NULL){
        cout<<a->Data <<" ";
        a = a->Next;
    }
}

int main() {
    Node* head = NULL;
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 40);
    InsertAtHead(head, 50);
    InsertAtHead(head, 60);

    Print_linked_List(head);

return 0;
}
