#include <iostream>
#include <vector>
using namespace std;

vector<int> even_generator(vector<int> v) {
    vector<int> evens;
    for (auto i : v) {
        if (i % 2 == 0) {
            evens.push_back(i);
        }
    }
    return evens;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> evens = even_generator(v);
    for (auto i : evens) {
        cout << i << " ";
    }
    return 0;
}
