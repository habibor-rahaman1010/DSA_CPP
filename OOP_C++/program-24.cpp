// Recursive class in c++ OOP concept...

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        int id;
        string name;
        Person *father;
        Person *mother;
        Person *address;

        //print information...
        void displayInfo() {
            cout<<"ID: " <<this->id <<"\n";
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Father Name: " <<this->father->name <<"\n";
            cout<<"Mother Name: " <<this->mother->name <<"\n";
            cout<<"Address: " <<this->address->name <<"\n";

        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.address = new Person;

    p.id = 144369;
    p.name = "Mahmudullah Sheikh";
    p.father->name = "Asraful Sheikh";
    p.mother->name = "Sharmin Akter";
    p.address->name = "Arsin gate - Dhaka";
    p.displayInfo();

return 0;
}
