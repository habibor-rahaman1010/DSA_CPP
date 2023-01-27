#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //This function will swap the i-th index and j-th index.
    void swap(int i, int j){
        if(i == j) {
            return;
        };
        node *a = head;
        node *b = head;
        for(int k = 0; k < i; k++){
            a = a->nxt;
        }
        for(int k = 0; k < j; k++){
            b = b->nxt;
        }
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }


    void deleteZero() {
    node *a = head;
    while(a != NULL) {
        if(a->data == 0){
            if(a->prv != NULL){
                a->prv->nxt = a->nxt;
            }
            if(a->nxt != NULL){
                a->nxt->prv = a->prv;
            }
            if(a == head){
                 head = a->nxt;
            }
            sz--;
            }
             a = a->nxt;
        }
    }
};


int main()
{
    DoublyLinkedList dl;

    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);

    dl.Traverse();
    dl.swap(1, 4);
    dl.Traverse();
    cout<<"\n";


    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(5);

    dl.Traverse();
    dl.deleteZero();
    dl.Traverse();

    return 0;
}
