#include <iostream>

using namespace std;

class classA {
    public:
        void echoA() {
            cout<<"Class A.\n";
        }

    protected:
        void echoProtected() {
            cout<<"Protected.\n";
        }
};

class classB: public classA {           // Class B inherits class A.
    public:
        void echoB() {
            cout<<"Class B.\n";
            echoProtected();            // protected method access gain.
        }
};

int main() {
    classB objB;
    objB.echoB();
    objB.echoA();                       // Object of class B calls method of class A.
}