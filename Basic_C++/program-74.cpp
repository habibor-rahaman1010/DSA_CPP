// structure in c++ program...

#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string email;
    string phone;
    bool active;
};

int main() {
    struct Student s1;
    s1.id = 144369;
    s1.name = "Habibor Rahaman";
    s1.email = "habibor.rahaman1010@gmail.com";
    s1.phone = "01768280237";
    s1.active = true;

    cout<< s1.id << "\n";
    cout<< s1.name << "\n";
    cout<< s1.email << "\n";
    cout<< s1.phone << "\n";
    cout<< s1.active << "\n";

return 0;
}
