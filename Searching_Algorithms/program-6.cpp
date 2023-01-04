//Dynamic Array insertion c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Memory complexity O(n);
class Array {
    private:
        int *ara;
        int cap;
        int siz;

        void increase_size() {
            this->cap = this->cap * 2;
            int *tamp = new int[this->cap];
            for(int i = 0; i < this->siz; i++){
                tamp[i] = this->ara[i];
            }
            delete[] this->ara;
            this->ara = tamp;
        }

    public:
        Array() {
            this->ara = new int[1];
            this->cap = 1;
            this->siz = 0;
        }

        //Time complexity O(1)
        void Push(int x){
            if(this->cap == this->siz){
                increase_size();
            }
            this->ara[this->siz] = x;
            this->siz++;
        }

        //Time complexity O(1)
        void Insert(int position, int x) {
            if(this->cap == this->siz){
                increase_size();
            }
            for(int i = this->siz - 1; i >= position; i--){
                this->ara[i + 1] = this->ara[i];
            }
            this->ara[position] = x;
            this->siz++;
        }

        //Time complexity O(siz)
        void Print() {
            for(int i = 0; i < this->siz; i++){
                cout<<this->ara[i] <<" ";
            }
             cout<<"\n";
        }

        //Time complexity O(1)
        int getSize() {
            return this->siz;
        }

        //Time complexity O(1)
        int getElement(int index){
            if(index >= this->siz){
                cout<<"Error " <<index <<" is out of bound! ";
                return -1;
            }
            else{
                return this->ara[index];
            }
        }
};

int main() {
    Array a;
    a.Push(12);
    a.Push(14);
    a.Push(15);
    a.Push(21);
    a.Push(24);
    a.Push(11);
    a.Insert(5, 7);
    a.Print();
    cout<<a.getSize() <<"\n";

    for(int i = 0; i < a.getSize(); i++){
        cout<<a.getElement(i) <<"\n";
    }


    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}
