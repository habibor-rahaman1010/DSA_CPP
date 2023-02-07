//Deque implement in c++ program using linked list...

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prv;
    Node *nxt;
};

class Deque{
public:
    Node *head;
    Node *tail;
    int siz;

    Deque(){
        head = NULL;
        tail = NULL;
        siz = 0;
    }

    Node *CreateNode(int item){
        Node *newNode = new Node;
        newNode->data = item;
        newNode->prv = NULL;
        newNode->nxt = NULL;
        return newNode;
    }

    //push back function in deque...
    void push_back(int item){
        Node *newNode = CreateNode(item);
        if(siz == 0){
            head = newNode;
            tail = newNode;
            siz++;
            return;
        }
        tail->nxt = newNode;
        newNode->prv = tail;
        tail = newNode;
        siz++;
    }

    //push front in deque...
    void push_front(int item){
        Node *newNode = CreateNode(item);
        if(siz == 0){
            head = newNode;
            tail = newNode;
            siz++;
            return;
        }
        Node *a = head;
        a->prv = newNode;
        newNode->nxt = a;
        head = newNode;
        siz++;
    }

    //pop back in deque...
    void pop_back(){
        if(siz == 0){
            cout<<"Deque is empty! \n";
            return;
        }
        if(siz == 1){
            delete head;
            head = NULL;
            tail = NULL;
            siz--;
            return;
        }
        Node *a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        siz--;
    }

    //pop front in deque...
    void pop_front(){
        if(siz == 0){
            cout<<"Deque is empty! \n";
            return;
        }
        if(siz == 1){
            delete tail;
            head = NULL;
            tail = NULL;
            siz--;
            return;
        }
        Node *a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        siz--;
    }

    int front(){
        if(siz == 0){
            cout<<"Deque is empty! \n";
            return -1;
        }
        return head->data;
    }

    int back(){
        if(siz == 0){
            cout<<"Deque is empty! \n";
            return -1;
        }
        return tail->data;
    }
};

int main(){
    Deque d;
    d.push_back(40);
    d.push_back(50);
    d.push_back(60);
    d.pop_back();
    d.pop_front();

    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";

    d.push_front(30);
    d.push_front(20);
    d.push_front(10);
    d.pop_back();
    d.pop_front();

    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";

return 0;
}
