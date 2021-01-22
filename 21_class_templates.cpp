#include <iostream>

using namespace std;

template <class T>

class Person {
    T a, b;
    public:
        Person(T first, T second) {
            a = first;
            b = second;
        }

        T maxNumber();
};

template <class T>                              // Strictly need to define this template again here.
T Person<T>::maxNumber() {                      // Explicitly mentioning usage of class template after classname.
    return a > b ? a : b;
}

int main() {
    Person <int> personObj(1, 2);               // Type of parameter in class object must be of type <int>.
    cout<<personObj.maxNumber();
}