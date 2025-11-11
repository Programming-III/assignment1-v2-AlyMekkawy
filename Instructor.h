#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class Instructor : public Person{
private:
    string department;
    int experienceYears;

public:
    void display() override;
    Instructor(string n, int id, string dept, int year);
    ~Instructor();
};










#endif
