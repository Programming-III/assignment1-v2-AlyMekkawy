#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

//#write Person class here
class Person{
private:
    string name;
    int id;

public:
    virtual void display();

    string getName();
    int getID();

    Person(string name, int id);
    ~Person();
};











#endif
