#include <iostream>

using namespace std;

class Person {
    public:
        void echoNormal();
        void echoConstFunction() const;
};

void Person::echoNormal() {                 // throws error when accessed through const objects.
    cout<<"I'm a normal function.!\n";
}

void Person::echoConstFunction() const {
    cout<<"I'm a constant function.!\n";
}

int main () {
    Person personObj;
    const Person personObj1;                // can only access functions of type const.
    
    personObj.echoNormal();
    personObj.echoConstFunction();
}
