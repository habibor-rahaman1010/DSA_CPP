// function in c++ program...

#include <iostream>
using namespace std;

//add function...
int addition (int x = 0, int y = 0){
    int add = x + y;
    return add;
}

//add function...
int subtraction (int x = 0, int y = 0){
    int sub = x - y;
    return sub;
}

//add function...
int multiplication (int x = 0, int y = 0){
    int mul = x * y;
    return mul;
}

//add function...
int divide (int x = 0, int y = 0){
    int div = x / y;
    return div;
}

//add function...
int modulous(int x = 0, int y = 0){
    int mod = x % y;
    return mod;
}

int main() {
    int x = 64, y = 32;

    int add = addition(x, y);
    int sub = subtraction(x, y);
    int mul = multiplication(x, y);
    int div = divide(x, y);
    int mod = modulous(x, y);

    cout<<"sum is: " <<add <<"\n";
    cout<<"sub is: " << sub <<"\n";
    cout<<"mul is: " << mul <<"\n";
    cout<<"div is: " << div <<"\n";
    cout<<"mod is: " << mod <<"\n";

return 0;
}
