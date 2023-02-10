#include <iostream>
#include <list>
using namespace std;

void deleteValue(list<int> &l, int value){
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++){
        if (*it == value)
        {
            l.erase(it);
            break;
        }
    }
}

int main(){
    list<int> l = {7, 3, 8, 4, 5, 4};
    int value;
    cin>>value;

    deleteValue(l, value);
    for (int x : l){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
