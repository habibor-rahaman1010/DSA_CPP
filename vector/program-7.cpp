//vector in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>number;

    for(int i = 0; i < 10; i++){
        number.push_back(i);
    }

    number.insert(number.begin(), 100); //add element first index...
    number.insert(number.begin() + 2, 300); //add element 2 index...
    number.insert(number.begin() + number.size(), 200); //insert data last index
    number.push_back(400); //insert data last index

    for(int i = 0; i < number.size(); i++){
        int value = number[i];
        cout<<value <<" ";
    }



return 0;
}

