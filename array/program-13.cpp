//array pointer in c++ program find out min value...

#include <iostream>
using namespace std;

int arrayMin(int* ara, int* n) {
    int ans = *(ara);
    int* minn = &ans;
    for(int i = 0; i < *n; i++){
        if(*minn > *(ara + i)){
           *minn = *(ara + i);
        }
    }
    return *minn;
}

int main() {
    int ara[] = {32, 22, 13, 4 , 5};
    int n = 5;
    int ans;
    int* result = &ans;
    *result = arrayMin(ara, &n);
    cout<<"array min is: " <<*result;

return 0;
}
