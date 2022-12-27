// multi dimensional array in c++ program sum all elements...

#include <iostream>
using namespace std;

int main() {
    int number[3][3][3] = {
        {
            {21, 34, 56},
            {20, 14, 46},
            {26, 33, 51}
        },
        {
            {23, 24, 96},
            {41, 54, 58},
            {27, 51, 86}
        },
        {
            {33, 94, 46},
            {12, 84, 72},
            {11, 64, 96}
        }
    };

    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                sum += number[i][j][k];
            }
        }
    }
    cout<< "sum is: " <<sum <<"\n";

return 0;
}
