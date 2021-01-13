#include <iostream>

using namespace std;

class Number {
    public:
        int num;

    Number() {                                  // Initializing num attribute value to '0' once object is created.
        num = 0;
    }

    friend void friendMethod(Number obj);
};

void friendMethod(Number obj) {                 // has access to all attributes and methods of Number class.
    obj.num = 10;
    cout<<obj.num;
}

int main () {
    Number numObj;
    friendMethod(numObj);
}