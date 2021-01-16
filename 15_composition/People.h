#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"

using namespace std;

class People {
    public:
        People(string a, Birthday birthdayObj);
        void printBirthdayInfo();
    private:
        string name;
        Birthday dob;
};

#endif