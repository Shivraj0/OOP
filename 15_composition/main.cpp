#include <iostream>
#include "Birthday.cpp"
#include "People.cpp"

using namespace std;

int main() {
    Birthday birthObj(1,2,1998);

    People peopleObj("Shivraj", birthObj);
    peopleObj.printBirthdayInfo();
}