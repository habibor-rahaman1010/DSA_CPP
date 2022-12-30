//array pointer in c++ program...

#include <iostream>
using namespace std;

int arraySum(int* ara, int* n) {
    int ans = 0;
    int* sum = &ans;
    for(int i = 0; i < *n; i++){
        *sum += *(ara + i);
    }
    return *sum;
}

int main() {
    int ara[] = {1, 2, 3, 4 , 5};
    int n = 5;
    int ans;
    int* result = &ans;
    *result = arraySum(ara, &n);
    cout<<"array sum is: " <<*result;

return 0;
}
