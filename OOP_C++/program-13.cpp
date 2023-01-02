//Inheritance in c++ program...

#include <iostream>
using namespace std;

class Vehicle {
    public:
        string model;
        string brand;
        int gearBox;

        void start() {
            cout<<"Starting your vehicle! \n";
        }
};

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

        //this is my constructor function...
        Car(string model, string brand, int gearBox, string color, string owner, string enginType) {
            this->model = model;
            this->brand = brand;
            this->gearBox = gearBox;
            this->color = color;
            this->owner = owner;
            this->enginType = enginType;
        }
};

int main() {
    Car myCar("The Arteon", "Volkswagen", 5, "Light gray", "Habibor Rahaman", "Diesel engine");

    myCar.displayData();

return 0;
}
