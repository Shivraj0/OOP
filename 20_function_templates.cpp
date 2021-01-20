#include <iostream>

using namespace std;

template <class T>                // Create generic class. Generic class is basically for type of data instead of value.

T add(T a, T b) {                 // Return type and funtion parameters are independent of type but should be of same type i.e int, int.
    return a+b;
}

int main() {
    int a = 10, b = 20;
    cout<<add(a,b);
}
