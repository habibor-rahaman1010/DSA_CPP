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
        while(index > 0 && nodes[index] > nodes[(index - 1] / 2){
            swap(nodes[index], nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    //insert in Max Heap
    void Insert(int item){
        nodes.push_back(item);
        up_heapify(nodes.size() - 1);
    }
};

int main(){



return 0;
}
