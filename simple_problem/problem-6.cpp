//OOP problem in c++ program...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cuboid {
    private:
        int length;
        int width;
        int height;

    public:
        int id;

        Cuboid() {

        }

        Cuboid(int id, int length, int width, int height) {
            this->id = id;
            this->length = length;
            this->width = width;
            this->height = height;
        }
        void getVolume() {
            cout<<"Id: " <<this->id <<" " <<" " <<(this->length * this->height * this->width) <<"\n";
        }

        void getSurfaceArea() {
            cout<< ((2 * this->length * this->width) + (2 * this->length * this->height) + (2 * this->height * this->width)) <<"\n";
        }
};

bool comp(Cuboid a, Cuboid b) {
    return a.id > b.id;
}


int main() {
    vector<Cuboid>cub;

    for(int i = 0; i < 5; i++){
        cub.push_back(Cuboid(i + 1, 12, 4, 8));
    }

    for(int i = 0; i < 5; i++){
        cub[i].getVolume();
    }

    cout<<"________________After sorting_____________ \n";
    sort(cub.begin(), cub.end(), comp);
    for(int i = 0; i < 5; i++){
        cub[i].getVolume();
    }

return 0;
}
