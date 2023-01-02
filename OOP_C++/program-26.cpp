//inheritance in c++ program...

#include <iostream>
#include <string>
using namespace std;

class User {
    protected:
        string name;
        string email;
        string password;
};

class Admin : protected User {
    protected:
        string designation;
        string destination;

    public:
        void getInformation() {
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Email: " <<this->email <<"\n";
            cout<<"Password: " <<this->password <<"\n";
            cout<<"Designation: " <<this->designation <<"\n";
            cout<<"Destination: " <<this->destination <<"\n";
        }

        void setInformation(string name, string email, string password, string designation, string destination) {
            this->name = name;
            this->email = email;
            this->password = password;
            this->designation = designation;
            this->destination = destination;
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //instance create here...
    Admin habib;
    habib.setInformation("Habibor Rahaman", "habibor.rahaman1010@gmail.com",
        "FY%^*&FY(&*UI", "Software Engineer", "I will be a good human being");

    habib.getInformation();


return 0;
}
