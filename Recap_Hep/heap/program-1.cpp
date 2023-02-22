//heap implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

class Heap{
public:
    vector<int>nodes;

    Heap(){

    }

    void up_heapify(int index){
        while(index > 0 && nodes[index] > nodes[(index - 1) / 2]){
            swap(nodes[index], nodes[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void Insert(int x){
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

};

int main() {
    cout<<"Hello programmer";

return 0;
}