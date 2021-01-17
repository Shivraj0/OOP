#include <iostream>
#include "Parent.h"

using namespace std;

Parent:: Parent() {
    cout<<"Parent class contructor.!";          // Execution priority 1.
}

Parent::~Parent() {
    cout<<"Parent class decontructor.!";        // Execution priority 4.
}