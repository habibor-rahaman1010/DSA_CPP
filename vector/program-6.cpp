//vector in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>number;

    for(int i = 0; i <= 10; i++){
        number.push_back(i);
    }

    for(int i = 1; i <= 10; i++){
        int value = number[i];
        cout<<value <<" ";
    }

return 0;
}
