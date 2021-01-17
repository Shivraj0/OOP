#include <iostream>

using namespace std;

class Animal {
    
    protected:
        int power;

    public:
        void setPower(int value) {
            power = value;
        }
    
};

class Lion: public Animal {
    public:
        void attack() {
            cout<<"Lion attacked.!! Power: "<<power;
        }
};

class Tiger: public Animal {
    public:
        void attack() {
            cout<<"Tiget attacked.!! Power: "<<power;
        }
};

int main() {
    Lion lion;
    Tiger tiger;

    Animal *animal1 = &lion;        // Object(animal1) of animal class pointing to Object of Lion class which inherits Animal class.
    Animal *animal2 = &tiger;       // Object(animal2) of animal class pointing to Object of Tiger class which inherits Animal class.

    animal1->setPower(10);          // accessing setPower() method using animal object.
    animal2->setPower(20);

    lion.attack();                  // accessing attack() method using lion/tiger object.
    tiger.attack();
}
