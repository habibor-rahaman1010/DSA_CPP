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

    int sum = 0;
    for(int i = 0; i < ara.size(); i++){
        sum += ara[i];
    }

    cout<<"Total sum is: " <<sum <<"\n";

    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}
