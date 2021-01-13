#include <iostream>

using namespace std;

class Number {
    public: 
        int num;

    Number() {}

    Number(int value) {
        num = value;
    }

    Number operator+ (Number numObj)  {     // operator overloading function.
        Number result;
        result.num = num + numObj.num;      // num treated as obj1 and numObj treated as obj2.
        return result;
    }
};

int main() {
    Number obj1(2);
    Number obj2(3);
    Number obj3;

    obj3 = obj1 + obj2;                     // operator overloading function called.
    cout<<obj3.num;
}