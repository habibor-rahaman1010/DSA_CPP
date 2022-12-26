// switch case in c++ program....

#include <iostream>
using namespace std;

int main() {
    int day;
    cout<< "Enter the value of day: ";
    cin>> day;

    switch(day){
        case 1:
            cout<< "Saturday" << endl;
            break;

        case 2:
            cout<< "Sunday" << endl;
            break;

        case 3:
            cout<< "Monday" << endl;
            break;

        case 4:
            cout<< "Tuesday" << endl;
            break;

        case 5:
            cout<< "Wednesday" << endl;
            break;

        case 6:
            cout<< "Thursday" << endl;
            break;

        case 7:
            cout<< "Friday" << endl;
            break;

        default:
            cout<< "Don\'t match any case!" <<endl;
    }

return 0;
}
