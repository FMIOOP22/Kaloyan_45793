#ifndef SCHOOL_H
#define SCHOOL_H
#include "student.h"
#include <vector>

class School
{
public:
    void inputStudentsFromFile();
    void addStudent();
    void printAllStudents() const;
    void printStudentsBornInMarch() const;
    void printStudentHighestAverage() const;
    void printSorted();
private:
    void sortStudents();
private:
    std::vector <Student> students;
};

#endif