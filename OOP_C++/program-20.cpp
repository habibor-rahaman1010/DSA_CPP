//OOP in c++ program...

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int std_id;
        int age;
        string fatherName;
        string motherName;

        void printInformation() {
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Student Id: " <<this->std_id <<"\n";
            cout<<"Age: " <<this->age <<"\n";
            cout<<"Father Name: " <<this->fatherName <<"\n";
            cout<<"Mother Name: " <<this->motherName <<"\n";
        }
};

int main() {
    Student s;
    s.name = "Habibor Rahaman";
    s.std_id = 144369;
    s.age = 23;
    s.fatherName = "Kiron Bepary";
    s.motherName = "Piara Begum";

    s.printInformation();
    cout<<"\n";

    Student a;
    a.name = "Abdullah Sheikh";
    a.std_id = 76237;
    a.age = 8;
    a.fatherName = "Asraful Sheikh";
    a.motherName = "Sharmin Akter";

    a.printInformation();

return 0;
}
