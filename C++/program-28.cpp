//max and min in c++ program...

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int maxValue = max(25, 32);
    cout<< maxValue <<endl;

    int maxx = max({25, 32, 56, 44, 31});
    cout<< maxx <<endl;

    int minn = min(23, 14);
    cout<< minn <<endl;

    int minNum = min({21, 14, 45, 22, 7, 8});
    cout<< minNum <<endl;

return 0;
}
