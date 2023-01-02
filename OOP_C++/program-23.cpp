// Recursive class in c++ OOP concept...

#include <iostream>
#include <string.h>
using namespace std;

class Person {
    public:
        string name;
        Person *father;
        Person *mother;

        //display information...
        void displayInfo() {
            cout<<"Name: " << this->name <<"\n";
            cout<<"Father Name: " <<this->father->name <<"\n";
            cout<<"Mother Name: " <<this->mother->name <<"\n";
        }
};

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        Person p;
        p.father = new Person;
        p.mother = new Person;

        p.name = "Habibor Rahaman";
        p.father->name = "Kiron Bepary";
        p.mother->name = "Piyara Begum";

        p.displayInfo();

return 0;
}
