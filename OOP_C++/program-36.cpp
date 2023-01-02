// Recursive class in c++ OOP concept...and dynamic object creation and vector of class and sort array of class...

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
};

//sort object...
bool comp(Student a, Student b) {
    //when a is less then b;
    return a.id < b.id;
}

int main() {
/*
    Student *s1 = new Student(14, "Habibor Rahaman", "01768280237", "hbaibor.rahaman1010@gmail.com", 23, "Morning", true);

    s1->displayInformation();
    cout<<"\n";
    (*s1).displayInformation(); //another way to call dynamic object..
*/
    vector<Student>s;
    for(int i = 0; i < 5; i++){
        s.push_back(Student(5 - i, "Habibor Rahaman", "01768280237", "hbaibor.rahaman1010@gmail.com", 23, "Morning", true));
    }

    for(int i = 0; i < 5; i++){
        s[i].displayInformation();
        cout<<"\n";
    }

    cout<<"________________After sorting_____________ \n";
    sort(s.begin(), s.end(), comp);
    for(int i = 0; i < 5; i++){
        s[i].displayInformation();
        cout<<"\n";
    }


return 0;
}

