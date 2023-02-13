//Binary tree implement in c++ program...

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int id;
    Node *left;
    Node *right;
    Node *parent;
};

class BinaryTree{
public:
    Node *root;

    BinaryTree(){
        root = NULL;
    }

    Node *CreateNewNode(int id){
        Node *newNode = new Node;
        newNode->id = id;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    void Insertion(int id){
        Node *newNode = CreateNewNode(id);
        if(root == NULL){
            root = newNode;
            return;
        }
        queue<Node *>q;
        q.push(root);

        while(!q.empty()){
            Node * a = q.front();
            q.pop();

            if(a->left != NULL){
                q.push(a->left);
            }
            else{
                a->left = newNode;
                newNode->parent = a;
                return;
            }

            if(a->right != NULL){
                q.push(a->right);
            }
            else{
                a->right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }

    void BFS(){
        if(root == NULL){
            return;
        }
        queue<Node *>q;
        q.push(root);

        int p = -1;
        int l = -1;
        int r = -1;

        while(!q.empty()){
            Node *a = q.front();
            q.pop();

            if(a->left != NULL){
                l = a->left->id;
                q.push(a->left);
            }

             if(a->right != NULL){
                r = a->right->id;
                q.push(a->right);
            }

            if(a->parent != NULL){
                p = a->parent->id;
            }
            cout<<"Node " <<a->id <<" : Parent = " <<p <<" , left child = " <<l
            <<" , right child = " <<r <<"\n";

        }
    }
};

int main() {
    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();

return 0;
}
