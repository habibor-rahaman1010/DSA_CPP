//Linear search in c++ program...

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cout<<"Enter the value of (n and k): ";
    cin>>n >>k;

    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    string flag = "No! \n";
    int index = -1;
    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        if(value == k){
            flag = "Yes! \n";
            index = i;
        }
    }
    cout<<flag;
    cout<<index;

return 0;
}
