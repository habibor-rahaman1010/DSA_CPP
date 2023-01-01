//inside constructor of class in c++ program...

#include <iostream>
using namespace std;

class Car {
    public:
        string model;
        string brand;
        int price;
        int gear;
        int topSpeed;

        Car(string model, string brand, int price, int gear, int topSpeed){
            this->model = model;
            this->brand = brand;
            this->price = price;
            this->gear = gear;
            this->topSpeed = topSpeed;
        }
};

int main() {
    Car toyota("Primo", "Toyota", 1800000, 5, 180);
    cout<<"Model: " <<toyota.model <<"\n";
    cout<<"Brand: " <<toyota.brand <<"\n";
    cout<<"Price: " <<toyota.price <<"\n";
    cout<<"Gear: " <<toyota.gear <<"\n";
    cout<<"Top speed: " <<toyota.topSpeed <<"\n";

    cout<<"\n";
    Car Volkswagen("Razor", "Volkswagen", 4800000, 5, 240);
    cout<<"Model: " <<Volkswagen.model <<"\n";
    cout<<"Brand: " <<Volkswagen.brand <<"\n";
    cout<<"Price: " <<Volkswagen.price <<"\n";
    cout<<"Gear: " <<Volkswagen.gear <<"\n";
    cout<<"Top speed: " <<Volkswagen.topSpeed <<"\n";

return 0;
}
