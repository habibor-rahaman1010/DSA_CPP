#include <iostream>
using namespace std;

class Node {
 public:
   int value;
   Node* nxt;
   Node* prv;
};

class LinkedList {
 public:
   Node* head;
   Node* tail;
   int sz;

   LinkedList() {
      head = NULL;
      tail = NULL;
      sz=0;
   }

   Node* CreateNode ( int val ) {
      Node* newNode = new Node;
      newNode->value = val;
      newNode->nxt = NULL;
      newNode->prv = NULL;
      return newNode;
   }

   void insertHead( int value ) {
      Node* new_node = CreateNode( value );
      if( head == NULL ) {
         head = new_node;
         tail = new_node;
         return;
      }

      new_node->nxt = head;
      head->prv = new_node;
      head = new_node;
      sz++;
   }
   void insertTail( int value ) {
      Node* new_node = CreateNode( value );
      if( head == NULL ) {
         head = new_node;
         tail = new_node;
         return;
      }

      new_node->prv = tail;
      tail->nxt = new_node;
      tail = new_node;
      sz++;
   }
   void insertMid( int value ) {
      Node* new_node = CreateNode( value );
      if( head == NULL ) {
         head = new_node;
         tail = new_node;
         return;
      }
      Node* a = head;
      int i=0;
      while( i != ( sz-1 )/2 ) {
         a= a->nxt;
         i++;
      }
      Node* b = a->nxt;
      a->nxt = new_node;
      new_node->prv = a;
      if( b != NULL ) {
         new_node->nxt = b;
         b->prv = new_node;
      }
      sz++;
   }
   void print() {
      if( head == NULL ) {
         cout<<"Doubly linked list empty!\n";
         return;
      }

      Node* a = head;
      while( a!=NULL ) {
         cout<<a->value<<" ";
         a = a->nxt;
      }
      cout<<"\n";
   }
};

int main() {
   LinkedList a;

   a.insertHead( 10 );
   a.insertTail( 20 );
   a.insertMid( 5 );
   a.insertHead( 12 );
   a.insertTail( 30 );
   a.print();

}
