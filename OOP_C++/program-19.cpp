//Polymorphism in c++ program...

#include <iostream>
using namespace std;

class Animal {
    public:
        void animalSound(){
            cout<<"The animal make a sound! \n";
        }
};

class Dog : public Animal{
    public:
        void animalSound(){
            cout<<"The dog doing sound ghew ghew! \n";
        }
};

class Cat : public Animal{
    public:
        void animalSound(){
            cout<<"The car doing sound Mew Mew! \n";
        }
};

class Fox : public Animal{
    public:
        void animalSound(){
            cout<<"The fox doing sound pakkawoa pakkawoa! \n";
        }
};



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Animal myAnimal;
    Dog myDog;
    Cat myCat;
    Fox myFox;

    myAnimal.animalSound();
    myDog.animalSound();
    myCat.animalSound();
    myFox.animalSound();

return 0;
}
