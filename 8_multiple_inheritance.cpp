#include <iostream>

using namespace std;

class classA {
    public:
        void echoA() {
            cout<<"Class A.\n";
        }
};

class classB {
    public:
        void echoB() {
            cout<<"Class B.\n";
        }
};

class classC: public classA, public classB {        // Class C inherits class A and class B.
    public:
        void echoC() {
            cout<<"Class C.";
        }
};

int main() {
    classC obj;                                     // Object has access to method of each class.
    obj.echoA();
    obj.echoB();
    obj.echoC();
}