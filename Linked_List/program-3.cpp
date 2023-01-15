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

        LinkedList() {
            head = NULL;
        }

        Node* CreateNewNode(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            return newNode;
        }

        void InsertAtHead(int value) {

        }

};

int main() {


return 0;
}
