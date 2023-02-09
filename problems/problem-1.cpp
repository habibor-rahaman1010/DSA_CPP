//Queue implement using static array in c++ program...

#include <iostream>
using namespace std;

class Queue{
public:
    int *ara;
    int l;
    int r;
    int capacity;

    Queue(){
        ara = new int[1];
        capacity = 1;
        l = 0;
        r = -1;
    }
    void increase_size(){
        int *temp;
        temp = new int[capacity * 2];
        for(int i = 0; i < capacity; i++){
            temp[i] = ara[i];
        }
        swap(ara, temp);
        delete[] temp;
        capacity = capacity * 2;
    }


    void enqueue(int item){
        if(r + 1 >= capacity){
            increase_size();
        }
        r++;
        ara[r] = item;
    }

    void dequeue(){
        if(l > r){
            cout<<"Queue is empty! \n";
            return;
        }
        l++;
    }

    int frontQueue(){
        if(l > r){
            cout<<"Queue is empty! \n";
            return -1;
        }
        return ara[l];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    cout<<q.frontQueue();

return 0;
}
