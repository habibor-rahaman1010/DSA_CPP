#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    int getSize()
    {
        node *a = head;
        int cnt = 0;
        while (a != NULL)
        {
            a = a->next;
            cnt++;
        }
        return cnt;
    }

    int getValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (index == value)
            {
                return a->data;
            }
            a = a->next;
            index++;
        }
        return -1;
    }

    void printReverse()
    {
         printReverse(head);
         cout<<"\n";
    }

    void printReverse(node * a)
    {
        if(a==NULL) return;
        printReverse(a->next);
        cout<<a->data<<" ";
    }

    void swapFirst()
    {
      if(getSize()<2) return;

      node* first=head;
      node* second=head->next;

      first->next=head->next->next;
      second->next=first;

      node* temp=second;
      second=first;
      first=temp;
      head=first;
    }

    void Travers()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";
    l.printReverse();
    l.Travers();
    l.swapFirst();
    l.Travers();
    l.printReverse();
    return 0;
}
