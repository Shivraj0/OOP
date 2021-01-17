#include <iostream>
#include "Age.cpp"
#include "Person.cpp"

using namespace std;

int main() {
    Age ageObj(1);

    Person personObj("Shivraj", ageObj);
    personObj.printPersonAge();
}