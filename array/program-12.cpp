//array pointer in c++ program find out max value...

#include <iostream>
using namespace std;

int arrayMax(int* ara, int* n) {
    int ans = *(ara);
    int* maxx = &ans;
    for(int i = 0; i < *n; i++){
        if(*maxx < *(ara + i)){
           *maxx = *(ara + i);
        }
    }
    return *maxx;
}

int main() {
    int ara[] = {1, 2, 13, 4 , 5};
    int n = 5;
    int ans;
    int* result = &ans;
    *result = arrayMax(ara, &n);
    cout<<"array max is: " <<*result;

return 0;
}

