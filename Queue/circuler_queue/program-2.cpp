//implement dynamic circular queue in c++ program...

#include <iostream>
using namespace std;

class CirculerQueue{
public:
    int *ara;
    int ara_cap;
    int l;
    int r;
    int siz;

    CirculerQueue(){
        ara = new int[1];
        ara_cap = 1;
        l = 0;
        r = -1;
        siz = 0;
    }
    void remove_circuler(){
        if(l > r){
            int *temp = new int[ara_cap];
            int index = 0;
            for(int i = l; i < ara_cap; i++){
                temp[index] = ara[i];
                index++;
            }
            for(int i = 0; i <= r; i++){
                temp[index] = ara[i];
                index++;
            }
            swap(ara, temp);
            l = 0;
            r = ara_cap - 1;
            delete[] temp;
        }
    }
    void increase_size(){
        remove_circuler();
        //size increase
        int *temp = new int[ara_cap * 2];
        for(int i = 0; i < ara_cap; i++){
            temp[i] = ara[i];
        }
        swap(ara, temp);
        ara_cap = ara_cap * 2;
        delete[] temp;
    }

    void enqueue(int item){
        if(siz == ara_cap){
            increase_size();
        }
        r++;
        if(r == ara_cap){
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
        if(l == ara_cap){
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
