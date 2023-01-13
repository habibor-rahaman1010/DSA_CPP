#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    int size;

public:
    LinkedList() {
        head = NULL;
        size = 0;
    }

    void InsertAtHead(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
        size++;
    }

    int getSize() {
        return size;
    }

    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->data;
    }

    void printReverse(Node* p) {
        if (p == NULL) {
            return;
        }
        printReverse(p->next);
        cout << p->data << " ";
    }

    void printReverse() {
        printReverse(head);
    }

    void swapFirst() {
        if (size < 2) {
            return;
        }
        Node* temp = head->next;
        head->next = temp->next;
        temp->next = head;
        head = temp;
    }

    void Traverse() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}

