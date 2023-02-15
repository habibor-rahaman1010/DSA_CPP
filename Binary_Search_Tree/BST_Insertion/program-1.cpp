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

    void BFS(){
        if(root == NULL){
            return;
        }
        queue<Node *>q;
        q.push(root);

        while(!q.empty()){
            Node *a = q.front();
            q.pop();

            int l = -1, r = -1;

            if(a->left != NULL){
                l = a->left->data;
                q.push(a->left);
            }

            if(a->right != NULL){
                r = a->right->data;
                q.push(a->right);
            }

            cout<< "Node value: " <<a->data <<" Left Childe: " <<l <<" Right Childe: " <<r <<"\n";
        }
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

            if(newNode->data > privious->data){
                privious->right = newNode;
            }
            else{
                privious->left = newNode;
            }
        }
    }
};

int main() {
    Binary_Search_Tree bst;

    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);

    bst.BFS();
return 0;
}
