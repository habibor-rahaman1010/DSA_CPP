//vector in c++ program use iterator...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>number;
    vector<int>::iterator iter;
    number.resize(n);

    for(int i = 0; i < number.size(); i++){
        cin>>number[i];
    }

    for(iter = number.begin(); iter != number.end(); iter++){

        cout<<*iter <<" ";
    }

return 0;
}

