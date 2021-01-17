/* Abstract classes, virtual functions, pure virtual functions.. */

// # Abstract classes: Classes with pure virtual functions. 

#include <iostream>

using namespace std;

class Animal {
    public:
        virtual void attack();                  // Virtual function definition is in respective inherited class. This just acts as a dummy template.
        
        virtual void food() = 0;                // Pure Virtual function signature. Compulsorily needs to be overwritten.
};

class Lion: public Animal {
    public:
        void attack() {                         // this method is invoked using lion class obj.
            cout<<"Lion Attacked.!";
        }

        void food() {                           // Overwritten virtual function.
            cout<<"Carnivorous";
        }
};

class Tiger: public Animal {
    public:
        void attack() {                         // this method is invoked using tiger class obj.
            cout<<"Tiger Attacked.!";
        }
        
        void food() {                           // Overwritten virtual function.
            cout<<"Carnivorous";
        }
};

int main() {
    Lion lion;
    Tiger tiger;

    lion.attack();
    tiger.attack();
}