#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
void Person::display() {
        cout << "Name: " << name << " ID: " << id << endl;
}
string Person::getName(){return name;}
int Person::getID(){return id;};

Person::Person(string n, int id){
    this->name = n;
    this->id = id;
}
Person::~Person(){}

// ==================== Student Class Implementation ====================

void Student::display()  {
cout << "Student Info:" <<endl;

cout << "Name: " << this->getName() << endl
     << "Year: " << yearLevel << endl
     <<"Major: " << major << endl;
}

Student::Student(string n, int id, int y, string m) : Person(n, id){
yearLevel =y;
major = m;
}
Student::~Student(){}

// ==================== Instructor Class Implementation ====================
void Instructor::display() {
    cout << "Instructor Info:" << endl;
    cout << "Name: " << this->getName() << endl
         << "Department: " << department << endl
         << "Experience: " << experienceYears << endl;
}

//using init lists
Instructor::Instructor(string n, int id, string dept, int year) : Person(n,id), department(dept), experienceYears(year){}

Instructor::~Instructor(){}

// ==================== Course Class Implementation ====================

Course::Course(string courseCode, string courseName, int maxStud){
//here you cannot allow the user to NOT input these variables
this->courseCode = courseCode;
this->courseName = courseName;

int maxStudents = maxStud;
int currStudents = 0;

students = new Student[maxStud];
}

Course::~Course(){
    delete[] students;
}

bool Course::addStudent(const Student& s) {
    //i choose to have this method as a boolean to allow simple usage by user like a hashmap, e.g:
    // if(!addStudent(s)) {do error handling stuff}, if it returns true the student is added regardless
    if (currentStudents >= maxStudents){
        return false;
    }
    students[currentStudents++] = s;
    return true;
}

void Course::displayCourseInfo(){
    cout << "CourseCode: " << courseCode << " -  " << courseName << endl
         << "Max Students:  " << currentStudents << endl
         << "Currently Enrolled: ";

    for (int i = 0; i < currentStudents; i++){
        cout << students[i].getName() << " (" << students[i].getID() << ")" <<endl;
    }

}





// ==================== Main Function ====================
int main() {

    Student s1 = {"Omar Nabil", 2202, 2, "Informatics"};
    Instructor i1 = {"Dr. Lina Khaled", 123, "Computer Science", 5};
    Course c1 = {"CS101", "Introduction to Programming", 3};

    if (!c1.addStudent(s1)){
        cout << "Couldn't Add Student!";
    }

    c1.displayCourseInfo();
    i1.display();
    s1.display();
    
    return 0;
}
