#include <iostream>

using namespace std;

class echo {
    public:
        echo(int);
        void echoA();

    private:
        int a;    
};

echo::echo(int value)
:a(value) {}

void echo::echoA() {
    cout<<"Value: "<<a<<endl;
    cout<<"Value: this->a: "<<this->a<<endl;
    cout<<"Value: (*this).a: "<<(*this).a<<endl;
}

int main() {
    echo obj(10);
    obj.echoA();
}