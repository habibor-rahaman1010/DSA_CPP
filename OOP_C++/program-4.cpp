//Methods define inside class, OOP in c++ program...

#include <iostream>
using namespace std;

class Student {
    public:
        int id;
        string name;
        string _class;
        string fevSubject;
        void display();
        int result(int marks);
};

void Student::display() {
    cout<<"ID: " <<id <<"\n";
    cout<<"Name: " <<name <<"\n";
    cout<<"Class: " <<_class <<"\n";
    cout<<"Subject: " <<fevSubject <<"\n";
}

int Student::result(int marks) {
    return marks;
}

int main() {
    Student habib;
    habib.id = 144369;
    habib.name = "Habibor Rahaman";
    habib._class = "BSC Engineering";
    habib.fevSubject = "Math and Programming";

    habib.display();
    int ans = habib.result(95);
    cout<<"Result: "<<ans <<"\n";

return 0;
}
