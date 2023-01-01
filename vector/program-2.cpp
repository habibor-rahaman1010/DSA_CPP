//vector in c++ program input from user...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara;
    ara.resize(n);

    cout<<"Enter value in array: ";
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        cout<<value <<" ";
    }
    cout<<"\nCapacity is: " <<ara.capacity() <<"\n";

return 0;
}
