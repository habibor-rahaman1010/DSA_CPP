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

    //Insert any index in linked list...
    void InsertAtAnyIndex(int index, int value) {
        if(index < 0 || index > getLength()){

        }
        if(index == 0){
            InsertAtHead(value);
            return;
        }
        Node* a = head;
        int current_index = 0;
        while(current_index != index - 1){
            a = a->next;
            current_index++;
        }
        Node* newNode = Create_Node(value);
        newNode->next = a->next;
        a->next = newNode;
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

    void SearchAllItem(int item) {
        Node* a = head;
        int index = 0;
        bool flag = false;
        while(a != NULL) {
            if(a->data == item){
                cout<<a->data <<" found at index: " <<index <<"\n";
                flag = true;
            }
            a = a->next;
            index++;
        }
        if(!flag){
           cout<<item <<" not found at index: " <<-1 <<"\n";
        }
    }

    //delete item at head in linked list...
    void DeleteAtHead() {
        if(head == NULL){
            return;
        }
        Node* a = head;
        head = a->next;
        delete a;
    }

    //delete item at tail in linked list...
    void DeleteAtTail() {
        if(head == NULL){
            return;
        }

        Node* a = head;
        Node* prv = NULL;
        while(a->next != NULL) {
            prv = a;
            a = a->next;
        }
        delete a;
        prv->next = NULL;
    }

    //get linked list length...
    int getLength() {
        Node* a = head;
        int countt = 0;
        while(a != NULL) {
            a = a->next;
            countt++;
        }
        return countt;
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
    l.InsertAtHead(22);

    l.InsertAtTail(22);
    l.InsertAtTail(18);
    l.InsertAtTail(14);
    l.InsertAtTail(22);

    l.InsertAtAnyIndex(1, 7);
    l.InsertAtAnyIndex(5, 21);

    l.DeleteAtHead();
    //l.DeleteAtTail();

    l.Traverse(); cout<<"\n";

    cout<<"18 found at index: " <<l.SearchItem(18) <<"\n";
    cout<<"99 found at index: " <<l.SearchItem(99) <<"\n \n";

    l.SearchAllItem(22);
    l.SearchAllItem(10);
    l.SearchAllItem(78);cout<<"\n";
    cout<<"Length of linked list: " <<l.getLength() <<"\n";

return 0;
}
