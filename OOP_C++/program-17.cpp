//Multi level inheritance in c++ program...

#include <iostream>
using namespace std;

//base class (parent)
class Vehicle {
    protected:
        string model;
        string brand;
        int gearBox;

        void start() {
            cout<<"Starting your vehicle! \n";
        }
};

//derived class (child)
class Car : protected Vehicle {
    public:
        string color;
        string owner;
        string enginType;
};

//derived class (grandchild)
class CarOwner : protected Car {
    public:
        string country;
        string regNo;
        string date;

        void displayData() {
            cout<<"Model: " <<this->model <<"\n";
            cout<<"Brand: " <<this->brand <<"\n";
            cout<<"Gear box: " <<this->gearBox <<"\n";
            cout<<"Color: " <<this->color <<"\n";
            cout<<"Owner: " <<this->owner <<"\n";
            cout<<"Engin type: " <<this->enginType <<"\n";
            cout<<"Country: " <<this->country <<"\n";
            cout<<"Reg No: " <<this->regNo <<"\n";
            cout<<"Date: " <<this->date <<"\n";
            this->start();
        }

         //this is my constructor function...
        CarOwner(string model, string brand, int gearBox, string color, string owner,
            string enginType, string country, string regNo, string date)
        {
            this->model = model;
            this->brand = brand;
            this->gearBox = gearBox;
            this->color = color;
            this->owner = owner;
            this->enginType = enginType;
            this->country = country;
            this->regNo = regNo;
            this->date = date;
        }
};

int main() {
    CarOwner myCar("The Arteon", "Volkswagen", 5, "Light gray", "Habibor Rahaman",
    "Diesel engine", "Bangladesh", "BW172334", "02-02-2023");

    myCar.displayData();
    cout<<"\n";
    CarOwner hisCar("The Parado", "Toyota", 5, "Light gray", "Allen Shovo",
    "Diesel engine", "Bangladesh", "BXQ892398", "02-02-2022");

    hisCar.displayData();
return 0;
}

