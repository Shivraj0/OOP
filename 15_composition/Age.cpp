#include "Age.h"

#include <iostream>

using namespace std;

Age::Age(int value) {
    age = value;
}

void Age::printAge() {
    cout<<"Age is:"<<age;
}