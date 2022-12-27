// structure in c++ program...

#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string email;
    string sub[5];
    string phone;
    bool status;
};

int main() {
    struct Student s1;
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;

    for(int i = 0; i < n; i++){
        cout<< "Enter id: ";
        cin>> s1.id;

        cout<< "Enter name: ";
        getline(cin, s1.name);
        getline(cin, s1.name);

        cout<< "Enter email: ";
        cin>> s1.email;

        cout<< "Enter subjects: ";
        for(int j = 0; j < 5; j++){
            cin>> s1.sub[j];
        }

        cout<< "Enter phone: ";
        cin>> s1.phone;

        cout<< "Enter status: ";
        cin>> s1.status;
        cout<<"\n";
    }

    cout<<"\n";
    for(int i = 0; i < n; i++){
        cout<<"id: " << s1.id <<"\n";
        cout<<"name: " << s1.name <<"\n";
        cout<<"email: " << s1.email <<"\n";
        cout<<"subjects: \n";
        for(int j = 0; j < 5; j++){
            cout<<"\t" << s1.sub[j] <<"\n";
        }

        cout<<"phone: " << s1.phone <<"\n";
        cout<<"status: " << s1.status <<"\n";
        cout<<"\n";
    }
    cout<<"\n";

return 0;
}
