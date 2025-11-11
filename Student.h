#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
//#write student class here

class Student : public Person{
private:
    int yearLevel;
    string major;

public:
    //override keyword just to ensure correct behavior, looks nice
    void display() override;


    Student(string n, int id, int y, string m);
    ~Student();
};











#endif
