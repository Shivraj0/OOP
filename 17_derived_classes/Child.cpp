#include <iostream>
#include "Child.h"

using namespace std;

Child::Child() {
    cout<<"Child class constructor.!";              // Execution priority 2.
}

Child::~Child() {
    cout<<"Child class deconstructor.!";            // Execution priority 3.
}