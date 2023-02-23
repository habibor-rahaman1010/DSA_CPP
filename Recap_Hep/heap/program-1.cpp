//heap implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

class Heap{
public:
    vector<int>nodes;

    Heap(){
        
    }

    //this is my up_hepify function...
    void up_heapify(int index){
        while(index > 0 && nodes[index] > nodes[(index - 1) / 2]){
            swap(nodes[index], nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void Insert(int x ){
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    //print the heap
    void print_heap(){
        for(int i = 0; i < nodes.size(); i++){
            cout<<nodes[i] <<" ";
        }
        cout<<" ";
    }

    //this is my down_heapify funtion...
    void down_heapify(int index){

    }

    //delete heap node...
    void Delete(int index){
        swap(nodes[index], nodes[nodes.size() - 1]);
        down_heapify(index);
        nodes.pop_back();
    }

};

int main() {
    Heap h;

    h.Insert(4);
    h.Insert(7);
    h.Insert(9);
    h.Insert(1);
    h.Insert(10);
    h.Insert(5);
    h.Insert(8);

    h.print_heap();

return 0;
}