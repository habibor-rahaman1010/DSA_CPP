//access specifier in OOP in c++ program...

#include <iostream>
using namespace std;

class Person {
    private:
        int blanc;
        int age;

    protected:
        string country;

    public:
        int id;
        string name;
        string email;
        void getSecureInfo(){
            cout<<"Blanc: " <<this->blanc <<"\n";
            cout<<"Age: " <<this->age <<"\n";
            cout<<"Country: " <<this->country <<"\n";
        }

        //setter function which set private data..
        void setter(int blanc, int age) {
            this->blanc = blanc;
            this->age = age;
        }

        //setter function which set protected data..
        void setCountry(string country) {
            this->country = country;
        }


    //this is my constructor...
    Person(int id, string name, string email, int blanc, int age, string country){
        this->id = id;
        this->name = name;
        this->email = email;
        this->blanc = blanc;
        this->age = age;
        this->country = country;
    }
};

int main() {
    //need for performance...
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Person habib(144369, "Habibor Rahaman", "habibor.rahaman1010@gmail.com", 14570, 18, "Bangladesh");
    habib.setter(18785, 23);
    habib.setCountry("Australia");

    cout<<"ID: " <<habib.id <<"\n";
    cout<<"Name: " <<habib.name <<"\n";
    cout<<"Email: " <<habib.email <<"\n";
    habib.getSecureInfo();

return 0;
}

