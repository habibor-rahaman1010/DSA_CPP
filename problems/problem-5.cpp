#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;
};

class Deque{
public:
    Node *head;
    Node *tail;
    int size;

    Deque(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node *CreateNode(int item){
        Node *newNode = new Node;
        newNode->data = item;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    }

    //push back function in deque...
    void push_back(int item){
        Node *newNode = CreateNode(item);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        size++;
    }

    //push front in deque...
    void push_front(int item){
        Node *newNode = CreateNode(item);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        Node *current = head;
        current->prev = newNode;
        newNode->next = current;
        head = newNode;
        size++;
    }

    //pop back in deque...
    void pop_back(){
        if(size == 0){
            cout<<"Deque is empty! \n";
            return;
        }
        if(size == 1){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        Node *current = tail;
        tail = tail->prev;
        delete current;
        tail->next = NULL;
        size--;
    }

    //pop front in deque...
    void pop_front(){
        if(size == 0){
            cout<<"Deque is empty! \n";
            return;
        }
        if(size == 1){
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        Node *current = head;
        head = head->next;
        delete current;
        head->prev = NULL;
        size--;
    }

    int front(){
        if(size == 0){
            cout<<"Deque is empty! \n";
            return -1;
        }
        return head->data;
    }

    int back(){
        if(size == 0){
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
    d.push_back(70);

    d.pop_back();
    d.pop_front();

    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";


return 0;
}
