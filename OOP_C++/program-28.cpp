// Constructor overloading in c++ program...

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        int id;
        string name;
        string email;
        string color;
        int age;
        string shift;
        bool active;

        void displayInformation() {
            cout<<"ID: " <<this->id <<"\n";
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Email: " <<this->email <<"\n";
            cout<<"Color: " <<this->color <<"\n";
            cout<<"Age: " <<this->age <<"\n";
            cout<<"Shift: " <<this->shift <<"\n";
            cout<<"Active: " <<this->active <<"\n";
        }

        Student(int id, string name, string email, string color, int age, string shift, bool active) {
            this->id = id;
            this->name = name;
            this->email = email;
            this->color = color;
            this->age = age;
            this->shift = shift;
            this->active = active;
        }

        Student(int id, string name, string email, string color) {
            this->id = id;
            this->name = name;
            this->email = email;
            this->color = color;
        }

        //Empty constructor...
        Student() {

        }
};

int main() {
    Student habib(144369, "Habibor Rahaman", "habibor.rahaman1010@gmail.com", "Teal", 23, "Morning", true);
    habib.displayInformation();
    cout<<"\n";

    Student allen(782378, "Allen Shovo", "allenshovo10@gmail.com", "Red");
    allen.displayInformation();

    cout<<"\n";
    Student tamim;
    tamim.displayInformation();

return 0;
}

