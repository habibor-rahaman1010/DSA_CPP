//Linked list implement in c++ program...

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    //create a new node...
    Node* Create_Node(int item){
        Node* new_node = new Node;
        new_node->data = item;
        new_node->next = NULL;
        return new_node;
    }

    //Insert item at head in linked list...
    void InsertAtHead(int item){
        Node* a = Create_Node(item);

        if(a == NULL){
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    //Insert item at tail in linked list...
    void InsertAtTail(int item) {
        Node* a = Create_Node(item);
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = a;
    }

    //Search the value in linked list...
    int SearchItem(int item) {
        Node* a = head;
        int index = 0;
        while(a != NULL){
            if(a->data == item){
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }




    // Traverse the linked list...
    void Traverse() {
        Node* a = head;
        while(a != NULL){
            cout<<a->data <<" ";
            a = a->next;
        }
    }

};

int main() {
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(13);
    l.InsertAtHead(15);

    l.InsertAtTail(22);
    l.InsertAtTail(18);
    l.InsertAtTail(14);

    l.Traverse(); cout<<"\n";

    cout<<"18 found at index: " <<l.SearchItem(18) <<"\n";
    cout<<"99 found at index: " <<l.SearchItem(99) <<"\n";



return 0;
}
