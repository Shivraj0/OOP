#include <iostream>

using namespace std;

class Person {
    public:
        void echoInside() {                   // Declaring and defining method inside class.
            cout<<"Echo --> inside.";
        }

        void echoOutside();                   // Declaring method inside class.
};

void Person::echoOutside() {                  // Defining method outside class.
    cout<<"Echo --> outside.";
}

int main() {
    Person personObj;
    personObj.echoInside();
    personObj.echoOutside();
}