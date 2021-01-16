#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(int value)
: age(value) {}

void Person::printAge() {
    cout<<"Age: "<<age;
    cout<<"this->Age : "<<this->age;                // `this` variable stores the value of object in current context.
    cout<<"(*this).Age : "<<(*this).age;            // Another way of dereferencing a pointer.
}