#include <iostream>

using namespace std;

class Person {
    public:
        Person() {
            cout<<"Contructor.!";       // called when a new obj is created of the class.
        }
        ~Person() {                     // Deconstructor function.
            cout<<"Deconstructor.!";    // called when the obj of the class is destroyed.
        }
};

int main() {
    Person personObj;                   // Contructor called.
    cout<<"After Constructor.!";        // Deconstructor called after executing this line.
}