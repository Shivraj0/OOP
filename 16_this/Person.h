#ifndef PERSON_H
#define PERSON_H

class Person {
    public:
        Person(int);
        void printAge();

    private:
        int age;                // Initialized via member initializer.
};

#endif