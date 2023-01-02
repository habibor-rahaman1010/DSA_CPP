//OOP in c++ program...
//a class use as attribute in other class...

#include <iostream>
#include <string.h>
using namespace std;

class Person {
    public:
        int id;
        string name;
        string email;
        string phone;
};

class Person2 {
    public:
        Person p1;
        string county;
        string religion;

        //display information...
        void displayInfo() {
            cout<<"ID: " <<this->p1.id <<"\n";
            cout<<"Name: " <<this->p1.name <<"\n";
            cout<<"email: " <<this->p1.email <<"\n";
            cout<<"Phone: " <<this->p1.phone <<"\n";
            cout<<"Country: " <<this->county <<"\n";
            cout<<"Religion: " <<this->religion <<"\n";

        }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Person2 habib;
    habib.p1.id = 144369;
    habib.p1.name = "Habibor Rahaman";
    habib.p1.email = "habibor.rahaman1010@gmail.com";
    habib.p1.phone = "01768280237";
    habib.county = "Bnagladesh";
    habib.religion = "Islam";

    habib.displayInfo();

return 0;
}
