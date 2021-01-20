#include <iostream>

using namespace std;

template <class T>                // Create generic class. Generic class is basically for type of data instead of value.

T add(T a, T b) {                 // Return type and funtion parameters are independent of type but should be of same type i.e int, int.
    return a+b;
}

template <class S, class U>

S ADD(S a, U b) {
    return a + b;                 // Returns value of type S. i.e type of first parameter.
}

int main() {
    int a = 10, b = 20;
    cout<<add(a,b);              // Regular template with single class.
    
    int c = 10;
    double d = 20.20;
    cout<<ADD(c, d);            // Template with multiple input type parameters.
}
