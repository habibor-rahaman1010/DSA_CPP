//Binary tree implement in c++ program...

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

    Node *CreateNewNode(int id, int value){
        Node *newNode = new Node;
        newNode->id = id;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    void Insertion(int id, int value){
        Node *newNode = CreateNewNode(id, value);
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
                //Insert in left child of node
                a->left = newNode;
                newNode->parent = a;
                return;
            }

            if(a->right != NULL){
                q.push(a->right);
            }
            else{
                //Insert in right child of node
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

            int p = -1;
            int l = -1;
            int r = -1;
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

    void DFS(Node *a){
        if(a == NULL){
            return;
        }
        cout<<a->id <<" ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(Node *a){
        if(a == NULL){
            return;
        }
        Inorder(a->left);
        cout<<a->id <<" ";
        Inorder(a->right);
    }

    void Preorder(Node *a){
        if(a == NULL){
            return;
        }
        cout<<a->id <<" ";
        Preorder(a->left);
        Preorder(a->right);
    }

    void Postorder(Node *a){
        if(a == NULL){
            return;
        }
        Postorder(a->left);
        Postorder(a->right);
        cout<<a->id <<" ";
    }

    void Search(Node *a, int value){
        if(a == NULL){
            return;
        }
        if(a->value == value){
            cout<<"Node id: " <<a->id <<"\n";
            return;
        }
        Search(a->left, value);
        Search(a->right, value);
    }
};

int main() {
    BinaryTree bt;
    bt.Insertion(0, 7);
    bt.Insertion(1, 8);
    bt.Insertion(2, 11);
    bt.Insertion(3, 12);
    bt.Insertion(4, 9);
    bt.Insertion(5, 10);

    bt.BFS();
    bt.Search(bt.root, 9);
    bt.DFS(bt.root);
    cout<<"\n";
    bt.Inorder(bt.root);
    cout<<"\n";
    bt.Preorder(bt.root);
    cout<<"\n";
    bt.Postorder(bt.root);
    cout<<"\n";

return 0;
}
