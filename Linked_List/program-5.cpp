//conceptual session linked list practice

#include <iostream>
using namespace std;

class Node {
    public:
        int Data;
        Node* Next;


        Node(int value){
            this->Data = value;
            this->Next = NULL;
        }
};

int main() {
    Node* a = new Node(10);
    Node* b = new Node(32);
    Node* c = new Node(14);
    Node* d = new Node(21);
    cout<<a->Data <<"\n";
    cout<<b->Data <<"\n";
    cout<<c->Data <<"\n";
    cout<<d->Data <<"\n";
    delete a;

return 0;
}
