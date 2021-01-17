#include "Person.h"
#include "Age.h"

#include <string>
using namespace std;

Person::Person(string a, Age ageObj)
: name(a), age(ageObj) {}

void Person::printPersonAge() {
    age.printAge();
}