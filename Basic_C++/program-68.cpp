// multi dimensional array in c++ program sum all element...

#include <iostream>
using namespace std;

int main() {
    int number[3][3] = {
        {21, 34, 56},
        {41, 54, 76},
        {11, 24, 66}
    };

    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum += number[i][j];
        }
    }
    cout<< "sum of array element is: " << sum << "\n";

return 0;
}

