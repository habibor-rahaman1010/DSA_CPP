//Binary Search Tree node id delete in c++ program...

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

    //Delete function in binary tree...
    void Delete(int item){
        Node *current = root;
        Node *privious = NULL;

        while(current != NULL){
            if(item > current->data){
                privious = current;
                current = current->right;
            }
            else if(item < current->data){
                privious = current;
                current = current->left;
            }
            else{
                break;
            }
        }

        if(current == NULL){
            cout<<"Item is not present in binary search tree! \n";
            return;
        }
        //case:1 both childe is NULL
        if(current->left == NULL && current->right == NULL){
            if(privious->left != NULL && privious->left->data == current->data){
                privious->left = NULL;
            }
            else{
                privious->right = NULL;
            }
            delete current;
            return;
        }
        //case:2 node has only right childe...
        if(current->left == NULL && current->right != NULL){
            if(privious->left != NULL && privious->left->data == current->data){
                privious->left = current->right;
            }
            else{
                privious->right = current->right;
            }
            delete current;
            return;
        }
        //case:2 node has only left childe...
        if(current->left != NULL && current->right == NULL){
            if(privious->left != NULL && privious->left->data == current->data){
                privious->left = current->left;
            }
            else{
                privious->right = current->left;
            }
            delete current;
            return;
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

    bst.Delete(8);
    bst.BFS();


return 0;
}
