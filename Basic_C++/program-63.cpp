//string array loop in c++ program....

#include <iostream>
using namespace std;

int main() {
    string players[] = {"Naymer", "Ronaldo", "Messi", "kaka", "Robinho", "Ronaldinho"};
    int length = sizeof(players) / sizeof(players[0]);

    for(int i = 0; i < length; i++){
        string value = players[i];
        cout<< value << "\n";
    }

return 0;
}
