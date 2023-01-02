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
    cout<<"Peremeter: " <<r1.calculatePeremeter() <<"\n";

return 0;
}
