#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node *Left;
    node *Right;
    node *parent;
};


class BinaryTree{
public:
    node* root;

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insertion(int id)
    {
        node* newnode = CreateNewNode(id);
        if(root==NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->Left != NULL){
                q.push(a->Left);
            }
            else{
                //Insert in left child of node a
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->Right != NULL){
                q.push(a->Right);
            }
            else{
                //Insert in right child of node a
                a->Right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1 , r= - 1;
            if(a->Left != NULL){
                l = a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL){
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->parent != NULL)
                p = a->parent->id;
            cout<<"Node id = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent id = "<<p<<"\n";

        }
    }
};


int main()
{
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
