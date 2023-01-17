//Linked List implement in c++ program...

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* nxt;
};

class LinkedList {
    public:
        Node* head;

        //This is my constructor function
        LinkedList() {
            head = NULL;
        }

        //Create a new node... data = value and nxt = NULL set
        Node* CreateNewNode(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->nxt = NULL;
            return newNode;
        }


        // Insert data at head of linked list...
        void InsertAtHead(int value) {
            Node* a = CreateNewNode(value);
            if(head == NULL){
                head = a;
                return;
            }
            a->nxt = head;
            head = a;

        }

        // Traverse linked list...
        void Traverse() {
            Node* a = head;
            while(a != NULL){
                cout<<a->data <<" ";
                a = a->nxt;
            }
            cout<<"\n";
        }

        //Search for a distinct value...
        int SearchDistinctValue(int value) {
            Node* a = head;
            int index = 0;
            while(a != NULL){
                if(a->data == value){
                    return index;
                }
                a = a->nxt;
                index++;
            }
            return -1;
        }

        //Search all possible occurrence value...
        void SearchAllValue(int value) {
            Node* a = head;
            int index = 0;
            bool flag = false;
            while(a != NULL){
                if(a->data == value){
                    cout<<value <<" found at index: " <<index <<"\n";
                    flag = true;
                }
                a = a->nxt;
                index++;
            }
            if(!flag){
                cout<<value <<" found at index: " <<-1 <<"\n";
            }
        }
};

int main() {
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(13);
    l.InsertAtHead(17);
    l.InsertAtHead(18);
    l.InsertAtHead(13);

    l.Traverse();
    cout<<"17 found at index " <<l.SearchDistinctValue(17) <<" \n";
    cout<<"77 found at index " <<l.SearchDistinctValue(77) <<" \n";

    l.SearchAllValue(13);
    l.SearchAllValue(10);
    l.SearchAllValue(100);

return 0;
}
