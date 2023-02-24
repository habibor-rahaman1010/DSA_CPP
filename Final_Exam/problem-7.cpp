#include <bits/stdc++.h>
using namespace std;

class node {
 public:
   int data;
   node* Left;
   node* Right;
};


class BST {
 public:
   node *root;
   BST() {
      root = NULL;
   }

   node* CreateNewNode( int item ) {
      node* new_node = new node;
      new_node->data = item;
      new_node->Left = NULL;
      new_node->Right = NULL;
      return new_node;
   }

   void Insert(int data) {
      node* newNode = CreateNewNode(data);
      if(root == NULL) {
         root = newNode;
         return;
      }

      node* current = root;
      node* previous = NULL;

      while(current != NULL) {
         if(newNode->data > current->data) {
            previous = current;
            current = current->Right;
         } else {
            previous = current;
            current = current->Left;
         }
      }

      if( newNode->data > previous->data )
         previous->Right = newNode;
      else
         previous->Left = newNode;
   }
   bool Search( int data ) {
      if(root == NULL){
         cout<<"Tree is empty!\n";
         return false;
      }

      node* current = root;
      while(current != NULL){
         if(current->data > data){
            current = current->Left;
         }
         else if (current->data < data){
            current = current->Right;
         }

         else{
            return true;
         }
      }
      return false;
   }
};

int main() {
   BST bst;
   bst.Insert( 10 );
   bst.Insert( 20 );
   bst.Insert( 25 );
   bst.Insert( 50 );
   bst.Insert( 8 );
   bst.Insert( 9 );

   cout<<bst.Search( 10 )<<"\n"; //1
   cout<<bst.Search( 9 )<<"\n"; //1
   cout<<bst.Search( 20 )<<"\n"; //1
   cout<<bst.Search( 60 )<<"\n"; //0

return 0;
}
