//Linked list apply in c++ program...

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
        int siz;

        LinkedList() {
            head = NULL;
            siz = 0;
        }

        Node* CreateNewNode(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            return newNode;
        }

        //Insert data at head in linked list...
        void InsertAtHead(int value) {
            siz++;
            Node* a = CreateNewNode(value);
            if(head == NULL){
                head = a;
                return;
            }
            a->next = head;
            head = a;
        }

        // Traverse liked list
        void Traverse() {
            Node* a = head;
            while(a != NULL){
                cout<<a->data <<" ";
                a = a->next;
            }
            cout<<"\n";
        }

        //Search distinct value in linked list...
        int SearchDistinctValue(int value) {
            Node* a = head;
            int index = 0;

            while(a != NULL){
                if(a->data == value){
                    return index;
                }
                a = a->next;
                index++;
            }
            return - 1;
        }

        //Search all possible occurrence in lined list...
        void SearchAllValue(int value) {
            Node* a = head;
            int index = 0;
            bool flag = false;
            while(a != NULL){
                if(a->data == value){
                    cout<<value <<" found it index " <<index <<"\n";
                    flag = true;
                }
                index++;
                a = a->next;
            }
            if(!flag){
                cout<<value <<" not found it index " <<-1 <<"\n";
            }
        }

        //get size linked list...

        int getSize(){
            Node* a = head;
            int cnt = 0;
            while(a != NULL){
                cnt += 1;
                a = a->next;
            }
            return cnt;
        }

        int getLength() {
            return siz;
        }

        void InsertAnyIndex(int index, int value) {
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
            Node* newNode = CreateNewNode(value);
            newNode->next = a->next;
            a->next = newNode;
        }


        //This is my destructor function...
        public:
        ~LinkedList(){
            Node* temp = head;
            while(temp != NULL){
                Node* next = temp->next;
                delete temp;
                temp = next;
            }
        }

};

int main() {
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(12);
    l.InsertAtHead(15);
    l.InsertAtHead(17);
    l.InsertAtHead(10);
    l.InsertAtHead(10);
    l.InsertAtHead(15);
    l.InsertAtHead(32);

    l.Traverse();

    cout<<"15 found it index " <<l.SearchDistinctValue(15) <<"\n \n";

    l.SearchAllValue(100);
    l.SearchAllValue(10);

    cout<<"Linked list size: " <<l.getSize() <<"\n";
    cout<<"Linked list length: " <<l.getLength() <<"\n";


return 0;
}

