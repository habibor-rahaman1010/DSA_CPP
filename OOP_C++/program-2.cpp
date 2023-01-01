//Create multiple object of one class OOP in c++ program...

#include <iostream>
using namespace std;

class Car {
    public:
        string name;
        string color;
        string brand;
        int price;
        int gear;
        int topSpeed;
        string condition;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //object 1
    Car obj1;
    obj1.name = "BMW seven series";
    obj1.color = "Black";
    obj1.brand = "BMW";
    obj1.price = 17050000;
    obj1.gear = 6;
    obj1.topSpeed = 240;
    obj1.condition = "Fresh";

    //object 2
    Car obj2;
    obj2.name = "Nissan GTR";
    obj2.color = "Light gray";
    obj2.brand = "Nissan";
    obj2.price = 28050000;
    obj2.gear = 6;
    obj2.topSpeed = 340;
    obj2.condition = "Fresh";

    //object 1 print attributes value...
    cout<<"Name: " <<obj1.name <<"\n";
    cout<<"Color: " <<obj1.color <<"\n";
    cout<<"Brand: " <<obj1.brand <<"\n";
    cout<<"Price: " <<obj1.price <<"\n";
    cout<<"Gear: " <<obj1.gear <<"\n";
    cout<<"Top speed: " <<obj1.topSpeed <<"\n";
    cout<<"Condition: " <<obj1.condition <<"\n";

    cout<<"\n";
    //object 2 print attributes value...
    cout<<"Name: " <<obj2.name <<"\n";
    cout<<"Color: " <<obj2.color <<"\n";
    cout<<"Brand: " <<obj2.brand <<"\n";
    cout<<"Price: " <<obj2.price <<"\n";
    cout<<"Gear: " <<obj2.gear <<"\n";
    cout<<"Top speed: " <<obj2.topSpeed <<"\n";
    cout<<"Condition: " <<obj2.condition <<"\n";

return 0;
}
