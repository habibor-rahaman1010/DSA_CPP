//if else statement in c++ program...

#include <iostream>
using namespace std;

int main() {
    if(5 < 2){
        cout<< "Hello World" << endl;
    }
    else if(5 == 10){
        cout<< "Hello programmer" << endl;
    }
    else if(5 != 5){
        cout<< "Hello gentlmen" <<endl;
    }
    else{
        cout<< "The last stage!" << endl;
    }

    bool condition = true;
    if(!condition){
        cout<< "Hello habibor Rahaman!" << endl;
    }
    else if(condition == false){
        cout<< "How can i help you?" <<endl;
    }
    else if(condition){
        cout<< "I am here programmer!" << endl;
    }
    else{
        cout<< "The last stage!";
    }

return 0;
}
