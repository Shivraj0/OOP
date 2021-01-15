#include <iostream>

using namespace std;

class Person {
    public:
        Person(int a, int b);
    
    private:
        int regVar;
        const int constVar;
};

Person::Person(int a, int b) : constVar(a) {    // Const variable `constVar` initialized with value a.
    cout<<"Constant variable: "<<constVar;
}

int main() {
    Person personObj(1,2);
}