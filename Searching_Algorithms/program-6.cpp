//Dynamic Array insertion c++ program... it's my own data structure in c++ program...

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

        void decrease_size() {
            this->cap = this->cap / 2;
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
        void Push_back(int x){
            if(this->cap == this->siz){
                this->increase_size();
            }
            this->ara[this->siz] = x;
            this->siz++;

            if(this->siz == this->cap / 2){
                this->decrease_size();
            }
        }

        //Time complexity O(siz)
        void Insert(int position, int x) {
            if(this->cap == this->siz){
                this->increase_size();
            }
            for(int i = this->siz - 1; i >= position; i--){
                this->ara[i + 1] = this->ara[i];
            }
            this->ara[position] = x;
            this->siz++;

            // capacity freed when (siz == cap / 2)
            if(this->siz == this->cap / 2){
                this->decrease_size();
            }
        }

        //Time complexity O(1)
        void Pop_back(){
            if(this->siz == 0){
                cout<<"Current size is 0 \n";
            }
            this->siz--;

            // capacity freed when (siz == cap / 2)
            if(this->siz == this->cap / 2){
                this->decrease_size();
            }
        }

        //Time complexity O(siz)
        void Erase(int position){
            if(position >= this->siz){
                cout<<position <<" Position does not exist \n";
                return;
            }
            for(int i = position + 1; i < this->siz; i++){
                this->ara[i - 1] = this->ara[i];
                //swap(this->ara[i - 1], this->ara[i]);
            }
            this->siz--;

            // capacity freed when (siz == cap / 2)
            if(this->siz == this->cap / 2){
                this->decrease_size();
            }
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
    a.Push_back(12);
    a.Push_back(14);
    a.Push_back(15);
    a.Push_back(65);
    a.Push_back(21);
    a.Push_back(24);
    a.Push_back(11);
    a.Push_back(67);
    a.Push_back(68);
    a.Insert(2, 7);
    a.Pop_back();
    a.Pop_back();
    a.Erase(1);
    a.Print();

    cout<<a.getSize() <<"\n";

    for(int i = 0; i < a.getSize(); i++){
        cout<<a.getElement(i) <<"\n";
    }


    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}
