//binary tree implement in c++ program...

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int id;
    int value;
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

    Node *CreateNewNode(int id, int item){
        Node *newNode = new Node;
        newNode->id = id;
        newNode->value = item;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    void Insertion(int id, int item){
        Node *newNode = CreateNewNode(id, item);
        if(root == NULL){
            root = newNode;
            return;
        }
        queue<Node *>q;
        q.push(root);

        while(!q.empty()){
            Node *a = q.front();
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

        while(!q.empty()){
            Node *a = q.front();
            q.pop();

            int l = -1, r = -1, p = -1;
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

    //DFS Traverse in binary tree...
    void DFS(Node *a){
        if(a == NULL){
            return;
        }

        cout<<a->id <<" ";

        DFS(a->left);
        DFS(a->right);
    }

    //DFS inorder Traverse in binary tree...
    void Inorder(Node *a){
        if(a == NULL){
            return;
        }

        DFS(a->left);
        cout<<a->id <<" ";
        DFS(a->right);
    }

    //DFS preorder Traverse in binary tree...
    void Preorder(Node *a){
        if(a == NULL){
            return;
        }
        cout<<a->id <<" ";

        DFS(a->left);
        DFS(a->right);
    }

    //DFS postorder Traverse in binary tree...
    void Postorder(Node *a){
        if(a == NULL){
            return;
        }
        DFS(a->left);
        DFS(a->right);

        cout<<a->id <<" ";
    }

    void Search(Node *a, int item){
        if(a == NULL){
            return;
        }

        if(a->value == item){
            cout<<"Node Id: " <<a->id;
            return;
        }

        Search(a->left, item);
        Search(a->right, item);
    }
};

int main() {
    BinaryTree bt;

    bt.Insertion(0, 12);
    bt.Insertion(1, 11);
    bt.Insertion(2, 51);
    bt.Insertion(3, 72);
    bt.Insertion(4, 10);
    bt.Insertion(5, 13);

    bt.Search(bt.root, 13);

return 0;
}
