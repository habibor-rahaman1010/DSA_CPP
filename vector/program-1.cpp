// vector in c++ program...

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int>ara = {12, 34, 23, 45, 67, 67, 54, 23, 98, 88};
    for(int i = 0; i < ara.size(); i++){
        int value = ara[i];
        cout<<value <<" ";
    }

return 0;
}
