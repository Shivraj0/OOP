#include "People.h"
#include "Birthday.h"

#include <string>
using namespace std;

People::People(string a, Birthday birthdayObj)
: name(a), dob(birthdayObj) {}

void People::printBirthdayInfo() {
    dob.printDate();
}