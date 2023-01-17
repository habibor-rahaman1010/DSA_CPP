//conceptual session linked list practice

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int item){
        this->data = item;
        this->next = NULL;
    }
};

//insert at tail in linked list...
Node* InsetAtTail(Node* head, int item) {
    Node* temp = head;
    Node* new_node = new Node(item);

    if(head == NULL){
       head = new_node;
       return head;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

//Traverse the linked list...
void Print_linked_List(Node* head) {
    Node* a = head;
    while(a != NULL) {
        cout<<a->data <<" ";
        a = a->next;
    }
}

int main() {
    Node* head = NULL;
    head = InsetAtTail(head, 10);
    InsetAtTail(head, 20);
    InsetAtTail(head, 30);
    InsetAtTail(head, 40);
    InsetAtTail(head, 50);

    Print_linked_List(head);

return 0;
}

