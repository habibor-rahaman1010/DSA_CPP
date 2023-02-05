//implement circular queue in c++ program...

#include <iostream>
using namespace std;

const int MAX_SIZE = 500;
class CirculerQueue{
public:
    int ara[MAX_SIZE];
    int l;
    int r;
    int siz;

    CirculerQueue(){
        l = 0;
        r = -1;
        siz = 0;
    }

    void enqueue(int item){
        if(siz == MAX_SIZE){
            cout<<"Queue is full! \n";
            return;
        }
        r++;
        if(r == MAX_SIZE){
            r = 0;
        }
        ara[r] = item;
        siz++;
    }

    void dequeue(){
        if(siz == 0){
            cout<<"Queue is empty! \n";
            return;
        }
        if(l == MAX_SIZE){
            l = 0;
        }
        l++;
        siz--;
    }

    int frontQueue(){
        if(siz == 0){
            cout<<"Queue is empty! \n";
            return -1;
        }
        return ara[l];
    }

    int size(){
        return siz;
    }

};

int main(){
    CirculerQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    cq.dequeue();
    cq.dequeue();

    cout<<cq.frontQueue();


return 0;
}
