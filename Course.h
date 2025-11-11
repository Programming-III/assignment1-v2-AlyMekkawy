#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class Course{
private:
    string courseCode, courseName;
    int maxStudents, currentStudents;
    Student* students;

public:
    Course(string courseCode, string courseName, int maxStud);

    ~Course();

    bool addStudent(const Student& s);

    void displayCourseInfo();

};













#endif
