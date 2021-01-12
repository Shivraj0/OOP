#include <iostream>

using namespace std;

class PersonA {
    public:
        PersonA() {
            cout<<"Inside class.\n";
            /* No return value. */
        }
};

class PersonB {
    public:
        PersonB();                  // Constructor method declaring inside class.
};

PersonB::PersonB() {                // Contructor method defining outside class.
    cout<<"Outside class.\n";
};

class PersonC {
    public:
        int age;
        PersonC(int value) {        // can take parameters to initialize attributes.
            age = value;
        }
};

int main() {
    PersonA personA;
    PersonB personB;

    PersonC personC(20);            // passing parameters to constructor.
    cout<<"Age: "<<personC.age;
}