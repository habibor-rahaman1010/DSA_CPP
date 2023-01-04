//prime number find out use sieve method and find complexity...

#include <iostream>
#include <vector>
using namespace std;

/*
    Time complexity O(nlogn)
    Space complexity O(n)
*/

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>primes;
    vector<bool>visited(n + 1);

    for(int i = 2; i <= n; i++){
        if(visited[i] == false){
            primes.push_back(i);
            for(int j = 2; i * j <= n; j++){
                visited[i * j] = true;
            }
        }
    }

    for(int i = 0; i < primes.size(); i++){
        cout<<primes[i] <<" ";
    }
    cout<<"\n";

return 0;
}
