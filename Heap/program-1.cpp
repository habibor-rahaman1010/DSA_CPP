//Max Heap implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;

    MaxHeap(){

    }

    void up_heapify(int index){
        while(index > 0 && nodes[index] > nodes[(index - 1) / 2]){
            swap(nodes[index], nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void Insert(int item){
        nodes.push_back(item);
        up_heapify(nodes.size() - 1);
    }

    void PrintHeap(){
        for(int i = 0; i < nodes.size(); i++){
            cout<<nodes[i] <<" ";
        }
        cout<<"\n";
    }
};

int main(){
    MaxHeap  heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);

    heap.PrintHeap();

return 0;
}
