// break in c++ program...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int i = 1; i <= n; i++){
        if(i == 5){
            break;
        }
        cout<< i << endl;
    }

return 0;
}
