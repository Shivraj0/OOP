#include <iostream>

using namespace std;

class classA {
    public:
        void echoA() {
            cout<<"Class A.\n";
        }
};

class classB: public classA {       // classB inherits classA.
    public:
        void echoB() {
            cout<<"Class B.\n";
        }
};

class classC: public classB {       // classC inherits classB which inherits classA.
    public:
        void echoC() {
            cout<<"Class C.";
        }
};

int main () {
    classC obj;                     // Oject has access to method of each class.
    obj.echoA();
    obj.echoB();
    obj.echoC();
}