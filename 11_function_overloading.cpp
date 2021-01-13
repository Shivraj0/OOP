#include <iostream>

using namespace std;

void printNum(int num) {                                // parameter of type int.
    cout<<"I am printing integer: " << num << endl;
}

void printNum(float num) {                              // parameter of type float.
    cout<<"I am printing float: " << num << endl;
}

int main() {
    int a = 10;
    float b = 10.2;
    printNum(a);
    printNum(b);
}