//Linked List implement in c++ program...

#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node* next;
};

class LinkedList {
    public:
        node* head;

        LinkedList(){
            head = NULL;
        }
        //initial create a node...data = value and next = null...
        node* CreateNode(int value) {
            node* newNode = new node;
            newNode->data = value;
            newNode->next = NULL;
            return newNode;
        }

        //Insert new value at head...
        void InsertAtHead(int value) {
            node* a = CreateNode(value);

            if(head == NULL){
                head = a;
                return;
            }
            a->next = head;
            head = a;
        };

        //print the liked list...
        void Traverse() {
            node* a = head;
            while(a != NULL){
                cout<<a->data <<" ";
                a = a->next;
            }
            cout<<"\n";
        }

        //search for single value...
        int SearchDistinckValue(int value) {
            node* a = head;
            int index = 0;
            while(a != NULL){
                if(a->data == value){
                    return index;
                }
                a = a->next;
                index++;
            }
            return -1;
        }

        //search all possible occurrence...
        void SearchAllValue(int value) {
            node* a = head;
            int index = 0;
            bool flag = false;
            while(a != NULL){
                if(a->data == value){
                    cout<<value <<" is found at index " <<index << "\n";
                    flag = true;
                }
                a = a->next;
                index++;
            }
            if(!flag){
                cout<<value <<" is found at index " <<-1 <<"\n";
            }
        }
};

int main() {
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(12);
    l.InsertAtHead(15);
    l.InsertAtHead(20);
    l.InsertAtHead(10);
    l.InsertAtHead(18);

    l.Traverse();

    cout<<"10 found at index " <<l.SearchDistinckValue(10) <<"\n";
    cout<<"22 fount at index " <<l.SearchDistinckValue(22) <<"\n";

    l.SearchAllValue(10);


return 0;
}
