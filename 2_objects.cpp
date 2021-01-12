#include <iostream>

using namespace std;

class Person {
    public:                                   // public attributes directly accessible by class objects.
        string name;
        void echo() {
            cout<<"Person class.";
        }
};

int main() {
    Person personObj;                         // Class obj instantiation.
    personObj.name = "Shivraj \n";            // Accessing public attribute name.
    cout<<"Name: "<<personObj.name;
    personObj.echo();                         // Accessing public method echo.
}