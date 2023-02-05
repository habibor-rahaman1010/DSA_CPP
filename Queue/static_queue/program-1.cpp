//Queue implement using static array in c++ program...

#include <iostream>
using namespace std;

const int MAX_SIZE = 500;
class Queue{
public:
    int ara[MAX_SIZE];
    int l;
    int r;

    Queue(){
        l = 0;
        r = -1;
    }

    void enqueue(int item){
        if(r + 1 >= MAX_SIZE){
            cout<<"Queue is full! \n";
            return;
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
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();

    cout<<q.frontQueue();

return 0;
}
