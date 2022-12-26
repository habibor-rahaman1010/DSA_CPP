// 1 to n number sum print use for loop in c++ program...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<< "Total sum: " << sum << endl;

return 0;
}
