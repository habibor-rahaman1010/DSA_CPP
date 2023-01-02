//access modifier of OOP in c++ program...

#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int id;
        string name;
        int age;
        string email;

    public:
        void printInformation() {
            cout<<"ID: " <<this->id <<"\n";
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Age: " <<this->age <<"\n";
            cout<<"Email: " <<this->email <<"\n";
        }

        void setInformation(int id, string name, int age, string email) {
            this->id = id;
            this->name = name;
            this->age = age;
            this->email = email;
        }
};

int main() {
    Student habib;
    habib.setInformation(144369, "Habibor Rahaman", 23, "habibor.rahaman1010@gmail.com");
    habib.printInformation();
    cout<<"\n";
    Student abdullah;
    abdullah.setInformation(781378, "Abdullah Sheikh", 8, "abdullah.sheikh1@gmail.com");
    abdullah.printInformation();

return 0;
}
