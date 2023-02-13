//DFS implement into binary tree in c++ program...

//Binary tree implement and DFS Pre order traversal apply on the tree in c++ program...

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int Id;
    Node *Left;
    Node *Right;
    Node *Parent;
};

class BinaryTree{
public:
    Node *Root;

    BinaryTree(){
        Root = NULL;
    }

    Node *CreateNewNode(int Id){
        Node *newNode = new Node;
        newNode->Id = Id;
        newNode->Left = NULL;
        newNode->Right = NULL;
        newNode->Parent = NULL;
        return newNode;
    }

    void build_binary_tree(){
        Node *allNodes[6];

        for(int i = 0; i < 6; i++){
            allNodes[i] = CreateNewNode(i);
        }

        allNodes[0]->Left = allNodes[1];
        allNodes[0]->Right = allNodes[2];

        allNodes[1]->Left = allNodes[5];
        allNodes[1]->Parent = allNodes[0];

        allNodes[2]->Left = allNodes[3];
        allNodes[2]->Right = allNodes[4];
        allNodes[2]->Parent = allNodes[0];

        allNodes[3]->Parent = allNodes[2];
        allNodes[4]->Parent = allNodes[2];
        allNodes[5]->Parent = allNodes[1];

        Root = allNodes[0];
    }

    void Preorder(Node *a){
        if(a == NULL){
            return;
        }
        cout<<a->Id <<" ";
        Preorder(a->Left);
        Preorder(a->Right);
    }
};

int main() {
    BinaryTree bt;
    bt.build_binary_tree();
    bt.Preorder(bt.Root);

return 0;
}
