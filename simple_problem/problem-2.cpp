// Write a program that takes n integer numbers, and sum up all the integers in that array.

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int mul = 1;
    for(int i = 0; i < ara.size(); i++){
        if(i % 2 != 0){
            mul *= ara[i];
        }
    }

    cout<<"Total multiplication is: " <<mul <<"\n";

    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}

