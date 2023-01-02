//OOP in c++ program...

#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    //area calculate..
    int calculateArea() {
        return (this->height * this->width);
    }

    //calculate perimeter...
    int calculatePeremeter() {
        return 2 * (this->height + this->width);
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Rectangle r1;
    r1.height = 4;
    r1.width = 8;
    cout<<"Area: " <<r1.calculateArea() <<"\n";
    cout<<"Perimeter: " <<r1.calculatePeremeter() <<"\n";
    cout<<"\n";

    Rectangle r2;
    r2.height = 8;
    r2.width = 12;
    cout<<"Area: " <<r2.calculateArea() <<"\n";
    cout<<"Perimeter: " <<r2.calculatePeremeter() <<"\n";

return 0;
}
