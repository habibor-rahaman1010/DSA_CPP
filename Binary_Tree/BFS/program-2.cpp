//Binary tree implement and BFS apply on the tree in c++ program...

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

    void BFS(){
        queue<Node *>q;
        q.push(Root);

        while(!q.empty()){
            Node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;

            if(a->Left != NULL){
               l = a->Left->Id;
               q.push(a->Left);
            }

            if(a->Right != NULL){
               r = a->Right->Id;
               q.push(a->Right);
            }

            if(a->Parent != NULL){
                p = a->Parent->Id;
            }
            cout<<"Node " <<a->Id <<" : Parent = " <<p <<" , left child = " <<l
            <<" , right child = " <<r <<"\n";
        }
    }
};

int main() {
    BinaryTree bt;
    bt.build_binary_tree();
    bt.BFS();

return 0;
}

