// Write a program that takes n integer numbers, and sum up all the integers in that array.

#include <iostream>
#include <string>
using namespace std;


int main() {
    string text;
    cout<<"Enter a string: ";
    cin>>text;

    for(int i = 0; i < text.length(); i++){
        if(i % 2 == 0){
            if(text[i] == 'z'){
                text[i] = 'a';
            }
            else{
                text[i]++;
            }
        }
        else{
            if(text[i] == 'z'){
                text[i] = 'a';
            }
        }
    }
    cout<<text;

    ios_base::sync_with_stdio(0);
    cin.tie(0);
return 0;
}


