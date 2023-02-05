//stack implement using singly linked list in c++ program...

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    int *next;
};

class LinkedList{
public:
    Node *head;

    LinkedList(){
        head = NULL;
    }

    Node *createNode(int item){
        Node *newNode = new Node;
        newNode->data = item;
        newNode->next = NULL;
        return newNode;
    }

    //Insert at head in linked list...
    void InsertAtHead(int item){
        Node *a = createNode(item);
        if(a == NULL){
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    //Delete at head in linked list...
    void DeleteAtHead(){
        if(head == NULL){
            return;
        }
        Node *a = head;
        head = a->next;
        delete a;
    }

    //traverse the linked list...
    void Traverse(){
        Node *a = head;
        while(a != NULL){
            cout<<a->data <<" ";
            a = a->next;
        }
    }
};

int main() {

return 0;
}

