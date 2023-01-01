//vector in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>number;
    number.resize(n);

    for(int i = 0; i < number.size(); i++){
        cin>> number[i];
    }

    for(int i = 0; i < number.size(); i++){
        int value = number[i];
        cout<<value <<" ";
    }
    cout<<"\nFirst value of vector: " <<number.front();
    cout<<"\nLast value of vector: " <<number.back();

    cout<<"\nVector Empty: " <<number.empty();

    number.clear();
    cout<<"\nVector Empty: " <<number.empty();

return 0;
}
