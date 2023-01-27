#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);
    for(int i = 0 ; i < ara.size(); i++){
        cin>>ara[i];
    }

    sort(ara.begin(), ara.end());
    ara.erase(unique(ara.begin(), ara.end()), ara.end());
    sort(ara.begin(), ara.end());

    for (int x : ara) {
        std::cout << x << " ";
    }
    cout<<"\n";

return 0;
}