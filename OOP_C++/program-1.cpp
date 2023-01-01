//OOP in c++ program...

#include<iostream>

using namespace std;

class Person {
    public:
        int id;
        string name;
        string address;
        string email;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Person obj;
    obj.id = 14;
    obj.name = "Habibor Rahaman";
    obj.address = "Mohammodpur - Dhaka";
    obj.email = "habibor.rahaman1010@gmail.com";

    cout<<"id: " <<obj.id <<"\n";
    cout<<"name: " <<obj.name <<"\n";
    cout<<"address: " <<obj.address <<"\n";
    cout<<"email: " <<obj.email <<"\n";

return 0;
}
