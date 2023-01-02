//inheritance in c++ program...vector of class and sort array of class...

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class User {
    public:
        int id;
        string name;
        string email;
        string password;
};

class Admin : public User {
    public:
        string designation;
        string destination;

    public:
        void getInformation() {
            cout<<"ID: " <<this->id <<"\n";
            cout<<"Name: " <<this->name <<"\n";
            cout<<"Email: " <<this->email <<"\n";
            cout<<"Password: " <<this->password <<"\n";
            cout<<"Designation: " <<this->designation <<"\n";
            cout<<"Destination: " <<this->destination <<"\n";
        }

        Admin(int id, string name, string email, string password, string designation, string destination) {
            this->id = id;
            this->name = name;
            this->email = email;
            this->password = password;
            this->designation = designation;
            this->destination = destination;
        }
};

bool comp(Admin a, Admin b) {
    return a.id < b.id;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //instance create here...
    vector<Admin>s;

    for(int i = 0; i < 5; i++){
        s.push_back(Admin(10 - i, "Habibor Rahaman", "habibor.rahaman1010@gmail.com",
        "FY%^*&FY(&*UI", "Software Engineer", "I will be a good human being"));
    }

    for(int i = 0; i < 5; i++){
        s[i].getInformation();
        cout<<"\n";
    }

    cout<<"________________After sorting_____________ \n";
    sort(s.begin(), s.end(), comp);
    for(int i = 0; i < 5; i++){
        s[i].getInformation();
        cout<<"\n";
    }


return 0;
}
