#include <iostream>

using namespace std;

class Person {
    public:
        void echoInside() {                   // Declaring and defining method inside class.
            cout<<"Echo --> inside.";
        }

        void echoOutside();                   // Declaring method inside class. -- Prototype.
};

void Person::echoOutside() {                  // Defining method outside class. -- Definition.
    cout<<"Echo --> outside.";
}

int main() {
    Person personObj;
    personObj.echoInside();
    personObj.echoOutside();
}