
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>ara){
    for(int i = ara.size() - 1; i >= 0; i-- ){
        cout<<ara[i] <<" ";
    }
    cout<<"\n";
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>ara(n); 
    for(int i = 0; i < n; i++){
        cin>>ara[i];
    }

    reverse(ara);

return 0;
}
