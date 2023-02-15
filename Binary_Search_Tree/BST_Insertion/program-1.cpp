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
        }
    }

};

int main() {


return 0;
}
