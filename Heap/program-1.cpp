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

    void down_heapify(int index){
        while(1){
            int largest = index;
            int left = (2 * index + 1);
            int right = (2 * index + 2);

            if(left < nodes.size() && nodes[largest] < nodes[left]){
                largest = left;
            }
            if(right < nodes.size() && nodes[largest] < nodes[right]){
                largest = right;
            }
            if(largest == index){
                break;
            }
            swap(nodes[index], nodes[largest]);
            index = largest;
        }
    }

    void Delete(int index){
        swap(nodes[index], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(index);
    }
};

int main(){
    MaxHeap  heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.Insert(20);
    heap.Insert(30);

    heap.PrintHeap();
    heap.Delete(0);
    heap.PrintHeap();

return 0;
}
