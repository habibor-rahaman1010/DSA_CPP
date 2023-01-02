//Inheritance in c++ program...

#include <iostream>
using namespace std;

//base class (parent)
class Vehicle {
    public:
        string model;
        string brand;
        int gearBox;

        void start() {
            cout<<"Starting your vehicle! \n";
        }
};

//derived class (child)
class Car : public Vehicle{
    public:
        string color;
        string owner;
        string enginType;

        void displayData() {
            cout<<"Model: " <<this->model <<"\n";
            cout<<"Brand: " <<this->brand <<"\n";
            cout<<"Gear box: " <<this->gearBox <<"\n";
            cout<<"Color: " <<this->color <<"\n";
            cout<<"Owner: " <<this->owner <<"\n";
            cout<<"Engin type: " <<this->enginType <<"\n";
            this->start();
        }
};

int main() {
    Car myCar;
    myCar.model = "The Arteon";
    myCar.brand = "Volkswagen";
    myCar.gearBox = 5;
    myCar.color = "Light gray";
    myCar.owner = "Habibor Rahaman";
    myCar.enginType = "Diesel engine";

    myCar.displayData();

return 0;
}
