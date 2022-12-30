// dynamic memory allocation in c++ program... access by value use pointer...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;

    int *ara = new int[n];

    for(int i = 0; i < n; i++){
        cin>>*(ara + i);
    }
    cout<<"\nprint the array..." <<"\n";

    for(int j = 0; j < n; j++){
        int value = *(ara + j);
        cout<<value <<"\n";
    }
    cout<<"\n";

    // memory freed here...
    delete[] ara;
    //delete ara;


return 0;
}

