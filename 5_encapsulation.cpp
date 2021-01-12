#include <iostream>

using namespace std;

class Person {
    int age;                         // attribute without access specifiers are by default private.

    public:
        void setAge(int value) {     // setter method to set Age.
            age = value;
        }

        int getAge() {               // getter method to get Age.
            return age;
        }
};

int main() {
    Person personObj;
    int age = 10000;
    personObj.setAge(age);
    cout<<"Age: "<<personObj.getAge();
}