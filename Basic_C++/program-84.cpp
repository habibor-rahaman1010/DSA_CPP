//namespace in c++ program....

#include <iostream>
using namespace std;

namespace stodio{
    int getSum(int x, int y) {
        int sum = x + y;
        return sum;
    }
}

int getSum(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    int x = 12, y = 10;
    int result =  stodio::getSum(x, y);
    int ans = getSum(x, y);
    cout<< result <<"\n";
    cout<< ans <<"\n";


return 0;
}
