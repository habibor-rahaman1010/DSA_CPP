//vector in c++ program delete element...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>number;

    for(int i = 0; i < 10; i++){
        number.push_back(i);
    }

    number.erase(number.begin()); //vector first element deleted
    number.erase(number.begin() + 4); // vector 4 index element deleted
    number.pop_back(); // vector last element deleted
    number.erase(number.begin() + number.size() - 1); // vector last element deleted


    for(int i = 0; i < number.size(); i++){
        int value = number[i];
        cout<<value <<" ";
    }



return 0;
}


