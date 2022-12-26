#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;
    if(n >= 1 && n <= 1000000){
        while(n){
            if(n == 1){
                break;
            }
            if(n % 2 == 0){
                cout<< n << " ";
                n = n / 2;
                if(n == 1){
                   cout<< n << " ";
                }
            }
            else{
                cout<< n << " ";
                n = n * 3 + 1;
                if(n == 1){
                   cout<< n << " ";
                }
            }
        }
    }

return 0;
}

