#include <iostream>

using namespace std;

template <class generic>                // Create generic template.

generic add(generic a, generic b) {     // Return type and funtion parameter are independent of type.
    return a+b;
}

int main() {
    int a = 10, b = 20;
    cout<<add(a,b);
}
