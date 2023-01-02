// Recursive class in c++ OOP concept...use constructor and destructor...

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

        //This is my empty constructor in program...
        Student() {
            this->id = NULL;
            this->name = NULL;
            this->phone = NULL;
            this->email = NULL;
            this->age = NULL;
            this->shift = NULL;
            this->active = NULL;
        }

         //This is my constructor in program...
        Student(int id, string name, string phone, string email, int age, string shift, bool active) {
            this->id = new Student;
            this->id->typeInt = id;

            this->name = new Student;
            this->name->typeString = name;

            this->phone = new Student;
            this->phone->typeString = phone;

            this->email = new Student;
            this->email->typeString = email;

            this->age = new Student;
            this->age->typeInt = age;

            this->shift = new Student;
            this->shift->typeString = shift;

            this->active = new Student;
            this->active->typeBool = active;
        }

        //This is my destructor in program...
        ~Student() {
            cout<<"called \n";
            if(this->id != NULL){
                delete this->id;
            }
            if(this->name != NULL){
                delete this->name;
            }
            if(this->phone != NULL){
                delete this->phone;
            }
            if(this->email != NULL){
                delete this->email;
            }
            if(this->age != NULL){
                delete this->age;
            }
            if(this->shift != NULL){
                delete this->shift;
            }
            if(this->active != NULL){
                delete this->active;
            }
        }
};

int main() {
    Student s1(144369, "Habibor Rahaman", "01768280237", "hbaibor.rahaman1010@gmail.com", 23, "Morning", true);
    s1.displayInformation();

return 0;
}
