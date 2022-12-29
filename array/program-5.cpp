//string in c++ program...

#include <iostream>
using namespace std;

int main() {
    string text = "I love Bangladesh. I living in Bangladesh.";
    string incript = "J!mpwf!Cbohmbefti/!J!mjwjoh!jo!Cbohmbefti/";

    cout<<text.size() <<"\n";

    //shift forward all character 1 time.
    for(int i = 0; i < text.size(); i++){
        text[i] = text[i] + 1;
    }
    cout<<text <<"\n";


    //shift back all character 1 time.
    for(int i = 0; i < incript.size(); i++){
        incript[i] = incript[i] - 1;
    }
    cout<<incript <<"\n";


return 0;
}
