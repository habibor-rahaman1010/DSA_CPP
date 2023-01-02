//Multiple Inheritance in c++ program...

#include <iostream>
using namespace std;

//base class (parent)...
class Person1 {
    string name;
    string phone;
    string emal;
};

// Another base class (parent)...
class Person2 {
    int age;
    string birthOfDate;
    string religion;
};

// Another base class (parent)...
class Person3 {
    string address;
    string occupassion;
    string country;
    int balance;
};

//derived class (child)...
class Person : public Person1, public Person2, public Person3 {

};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

return 0;
}
