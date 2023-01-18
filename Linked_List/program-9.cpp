//Linked list implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

//This class is my node structure...
class Node {
public:
    int data;
    Node* next;
};

//This is class is my linked list...
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

    //delete at any index...
    void DeleteAtAnyIndex(int index) {
        if(index < 0 || index > getLength() - 1){
            return;
        }
        if(index == 0){
            DeleteAtHead();
            return;
        }
        Node* a = head;
        int current_index = 0;
        while(current_index != index - 1){
            a = a->next;
            current_index++;
        }
        Node* b = a->next;
        a->next = b->next;
        delete b;
    }

    //Insert new item after a value...
    void InsertAfterValue(int value, int item){
        Node* a = head;
        while(a != NULL){
            if(a->data == value){
                break;
            }
            a = a->next;
        }
        if(a == NULL){
            cout<<value <<" does not exit linked list \n";
            return;
        }
        Node* new_node = Create_Node(item);

        new_node->next = a->next;
        a->next = new_node;
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

    //Traverse the linked list revers order...
    void TraverseReverse() {
        Node* a = head;
        vector<int>ara;
        while(a != NULL){
            ara.push_back(a->data);
            a = a->next;
        }
        for(int i = ara.size() - 1; i >= 0; i--){
            cout<<ara[i] <<" ";
        }
    }

    //Traverse the linked list revers order by recursive function...
    void TraverseRecursive(Node* a){
        if(a == NULL){
            return;
        }
        TraverseRecursive(a->next);
        cout<<a->data <<" ";
    }
    void ReversePrint(){
        TraverseRecursive(head);
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
    l.DeleteAtTail();

    l.DeleteAtAnyIndex(2);
    l.InsertAfterValue(10, 33);
    l.InsertAfterValue(7, 35);

    l.Traverse(); cout<<"\n";


    cout<<"18 found at index: " <<l.SearchItem(18) <<"\n";
    cout<<"99 found at index: " <<l.SearchItem(99) <<"\n \n";

    l.SearchAllItem(22);
    l.SearchAllItem(10);
    l.SearchAllItem(78);cout<<"\n";
    cout<<"Length of linked list: " <<l.getLength() <<"\n \n";

    cout<<"print reverse way... \n";
    l.TraverseReverse(); cout<<"\n";
    l.ReversePrint();

return 0;
}
