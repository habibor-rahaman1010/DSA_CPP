// multi dimensional array in c++ program...

#include <iostream>
using namespace std;

int main() {
    int number[3][3] = {
        {21, 34, 56},
        {41, 54, 76},
        {11, 24, 66}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<< number[i][j] << " ";
        }
        cout<< "\n";
    }

return 0;
}
