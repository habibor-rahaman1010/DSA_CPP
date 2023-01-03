//Time and space complexity in c++ program...

#include <iostream>
#include <algorithm>
using namespace std;

/*
    Time complexity is = O(1) constant time complexity....
    Space complexity is = O(1) constant Space complexity....
*/

int main() {
    int a, b, c, d;
    cout<<"Enter input (a, b, c, d): ";
    cin>>a >>b >>c >>d;

    int maxi = max({a, b, c, d});
    int mini = min({a, b, c, d});
    int sum = (a + b + c + d);
    int sub = (a - b - c - d);
    int mul = (a * b * c * d);
    int div = (a / b / c / d);
    int mod = (a % b % c % d);

    cout<<"max is: " <<maxi <<"\n";
    cout<<"min is: " <<mini <<"\n";
    cout<<"sum is: " <<sum <<"\n";
    cout<<"sub is: " <<sub <<"\n";
    cout<<"mul is: " <<mul <<"\n";
    cout<<"div is: " <<div <<"\n";
    cout<<"mod is: " <<mod <<"\n";

return 0;
}
