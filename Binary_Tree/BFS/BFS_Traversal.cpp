//Binary Search Tree new data insertion in c++ program...

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
};

class Binary_Search_Tree{
public:
    Node *root;

    Binary_Search_Tree(){
        root = NULL;
    }

    Node *CreateNewNode(int item){
        Node *newNode = new Node;
        newNode->data = item;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    //insert data in binary search tree...
    void Insert(int item) {
        Node *newNode = CreateNewNode(item);

        if(root == NULL){
            root = newNode;
            return;
        }

        Node *current = root;
        Node *privious = NULL;

        while(current != NULL){
            if(newNode->data > current->data){
                privious = current;
                current = current->right;
            }
            else{
                privious = current;
                current = current->left;
            }
        }
        if(newNode->data > privious->data){
                privious->right = newNode;
        }
        else{
            privious->left = newNode;
        }
    }

     void Inorder(Node *a){
        if(a == NULL){
            return;
        }
        Inorder(a->left);
        cout<<a->data <<" ";
        Inorder(a->right);
    }
};

int main() {
    Binary_Search_Tree bst;

    bst.Insert(20);
    bst.Insert(22);
    bst.Insert(10);
    bst.Insert(5);
    bst.Insert(12);
    bst.Insert(3);
    bst.Insert(15);
    bst.Insert(21);
    bst.Insert(25);
    bst.Inorder(bst.root);


return 0;
}
