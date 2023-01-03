//OOP problem in c++ program...

#include <iostream>
using namespace std;

class Cuboid {
    private:
        int length;
        int width;
        int height;

    public:
        Cuboid() {

        }

        Cuboid(int length, int width, int height) {
            this->length = length;
            this->width = width;
            this->height = height;
        }
        void getVolume() {
            cout<< (this->length * this->height * this->width);
        }
};


int main() {

    Cuboid cub1(12, 4, 6);
    cub1.getVolume();
return 0;
}
