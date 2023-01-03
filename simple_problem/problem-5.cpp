// WAP that takes 2 integer arrays as input, then computes the intersection of the two arrays.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout<<"Enter the value of n1: ";
    cin>>n1;
    vector<int>ara1(n1);

    for(int i = 0; i < ara1.size(); i++){
        cin>>ara1[i];
    }

    cout<<"Enter the value of n2: ";
    cin>>n2;
    vector<int>ara2(n2);

    for(int i = 0; i < ara2.size(); i++){
        cin>>ara2[i];
    }

    vector<int>concatAra(n1 + n2);
    for(int i = 0; i < n1; i++){
        concatAra[i] = ara1[i];
    }

    for(int i = 0; i < n2; i++){
        concatAra[i + n1] = ara2[i];
    }

    for(int i = 0; i < concatAra.size(); i++){
        cout<<concatAra[i] <<" ";
    }

return 0;
}

