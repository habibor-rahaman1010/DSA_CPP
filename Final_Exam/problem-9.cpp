#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    map<string, int>mp;
    for( int i = 0; i < n; i++ ) {
        string word;
        cin>>word;

    if(mp.count(word) == 0){
        cout<<-1<<"\n";
    }
    else{
        cout<<mp[word]<<"\n";
    }
        mp[word] = i;
    }

   return 0;
}
