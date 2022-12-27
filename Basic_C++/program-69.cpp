// multi dimensional array in c++ program find out max element...

#include <iostream>
using namespace std;

int main() {
    int number[3][3] = {
        {21, 34, 56},
        {41, 54, 76},
        {11, 24, 66}
    };

    int maxx = number[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(maxx < number[i][j]){
                maxx = number[i][j];
            }
        }
    }
    cout<< "max element is: " << maxx << "\n";

return 0;
}
