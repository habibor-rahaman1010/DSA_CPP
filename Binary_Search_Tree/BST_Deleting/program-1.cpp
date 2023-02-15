
//Binary Search Tree new data insertion in c++ program...

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node *parent;
};

class Binary_Search_Tree{
public:
    Node *root;

    Binary_Search_Tree(){
        root = NULL;
    }

    Node *CreateNewNode(int item){
        Node newNode = new Node;
        newNode->data = item;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }
};

int main() {


return 0;
}
