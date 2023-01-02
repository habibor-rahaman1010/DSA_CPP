//Multiple Inheritance in c++ program...use protected specifier...

#include <iostream>
using namespace std;

//base class (parent)...
class Person1 {
    protected:
        string name;
        string phone;
        string email;
};

// Another base class (parent)...
class Person2 {
    protected:
        int age;
        string birthOfDate;
        string religion;
};

// Another base class (parent)...
class Person3 {
    protected:
        string address;
        string occupassion;
        string country;
        int balance;
};

//derived class (child)...
class Person : protected Person1, protected Person2, protected Person3 {
    public:
        string passionate;

        void displayInfo() {
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Phone: " <<this->phone <<"\n";
            cout<<"Email: " <<this->email <<"\n";
            cout<<"Date of Birth: " <<this->birthOfDate <<"\n";
            cout<<"Religion: " <<this->religion <<"\n";
            cout<<"Address: " <<this->address <<"\n";
            cout<<"Occupassion: " <<this->occupassion <<"\n";
            cout<<"Country: " <<this->country <<"\n";
            cout<<"Balance: " <<this->balance <<"\n";
            cout<<"Passionate: " <<this->passionate <<"\n";
        }

        //this is my constructor function...
        Person(string name, string phone, string email, string birthOfDate, string religion,
            string address, string occupassion, string country, int balance, string passionate)
        {
            this->name = name;
            this->phone = phone;
            this->email = email;
            this->birthOfDate = birthOfDate;
            this->religion = religion;
            this->address = address;
            this->occupassion = occupassion;
            this->country = country;
            this->balance = balance;
            this->passionate = passionate;
        }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Person habib("Habibor Rahaman", "01768280237", "habibor.rahaman1010@gmail.com", "05-03-1999", "Islam", "Munshiganj-Dhaka",
        "CSE Student", "Bangladesh", 45780, "Computer Programming");

    Person allen("Allen Sovo", "01739230492", "allensovo@0101gmail.com", "05-03-1993", "Islam", "Dhaka",
        "CSE Student", "Bangladesh", 145780, "Computer Programming");

    habib.displayInfo();
    cout<<"\n";
    allen.displayInfo();

return 0;
}

