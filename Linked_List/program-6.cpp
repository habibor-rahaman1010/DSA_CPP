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
Node* InsertAtHead(Node* head, int value) {
    Node* new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        return head;
    }
    new_node->Next = head;
    head = new_node;
    return new_node;
}

void Print_linked_List(Node* head){
    Node* a = head;
}

int main() {
    Node* head = NULL;
    head = InsertAtHead(head, 10);
    head = InsertAtHead(head, 20);
    head = InsertAtHead(head, 30);
    head = InsertAtHead(head, 40);

    while(head != NULL){
       cout<<head->Data <<" ";
       head = head->Next;
    }
return 0;
}

