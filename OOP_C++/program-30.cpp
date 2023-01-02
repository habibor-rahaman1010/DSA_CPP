// Recursive class in c++ OOP concept...use constructor...

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        int typeInt;
        string typeString;
        bool typeBool;

        Student *id;
        Student *name;
        Student *phone;
        Student *email;
        Student *age;
        Student *shift;
        Student *active;

        void displayInformation() {
            cout<<"ID: " <<this->id->typeInt <<"\n";
            cout<<"Name: " <<this->name->typeString <<"\n";
            cout<<"Phone: " <<this->phone->typeString <<"\n";
            cout<<"Email: " <<this->email->typeString <<"\n";
            cout<<"Age: " <<this->age->typeInt <<"\n";
            cout<<"Shift: " <<this->shift->typeString <<"\n";
            cout<<"Active: " <<this->active->typeBool <<"\n";
        }
};

int main() {

    Student s1;
    s1.id = new Student;
    s1.name = new Student;
    s1.phone = new Student;
    s1.email = new Student;
    s1.age = new Student;
    s1.shift = new Student;
    s1.active = new Student;


    s1.id->typeInt = 14;
    s1.name->typeString = "Habibor Rahaman";
    s1.phone->typeString = "01768280237";
    s1.email->typeString = "hbaibor.rahaman1010@gmail.com";
    s1.age->typeInt = 23;
    s1.shift->typeString = "Morning";
    s1.active->typeBool = true;

    s1.displayInformation();

return 0;
}

