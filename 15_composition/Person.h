#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Age.h"

using namespace std;

class Person {
    public:
        Person(string a, Age ageObj);
        void printPersonAge();
    private:
        string name;
        Age age;
};

#endif