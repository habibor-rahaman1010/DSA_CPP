//namespace in c++ program use default parameater....

#include <iostream>
using namespace std;

namespace stodio{
    int getSum(int x = 15, int y = 45) {
        int sum = x + y;
        return sum;
    }
}

int getSum(int x = 25, int y = 15) {
    int sum = x + y;
    return sum;
}

int main() {
    int x = 12, y = 10;
    int result =  stodio::getSum(x, y);
    int ans = getSum(x, y);

    cout<< result <<"\n";
    cout<< ans <<"\n";

    int result2 =  stodio::getSum();
    int ans2 = getSum();

    cout<< result2 <<"\n";
    cout<< ans2 <<"\n";


return 0;
}

