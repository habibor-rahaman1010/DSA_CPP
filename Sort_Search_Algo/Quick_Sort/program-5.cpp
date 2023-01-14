//quick sort implement of mosh hamadani video...

#include <iostream>
#include <vector>
using namespace std;

int pertition(vector<int>&ara, int start, int endd) {
    int pivot = ara[endd];
    int boundary = start - 1;

    int temp;
    for(int i = start; i <= endd; i++){
        if(ara[i] <= pivot){
           swap(ara[i], ara[++boundary]);
        }
    }
    return boundary;
}

vector<int> Quick_Sort(vector<int>&ara, int start, int endd) {
    if(start >= endd){
        return ara;
    }
    int boundary = pertition(ara, start, endd);

    Quick_Sort(ara, start, boundary - 1);
    Quick_Sort(ara, boundary + 1, endd);

    return ara;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    vector<int>vect = Quick_Sort(ara, 0, ara.size() - 1);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }

return 0;
}
