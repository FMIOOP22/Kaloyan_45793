#ifndef STUDENT_H
#define STUDENT_H
#include "grade.h"

const int MAX_GRADES_CNT = 5;
const int MAX_EGN_SIZE = 10;
class Student
{
public:
    void printFirstAndLastName() const;
    double getGradeAverage() const;
    void printByThreeNamesAndFacNum() const;
    unsigned getFacNum() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend std::istream& operator>>(std::istream& is, Student& student);

private:
    std::string name;
    std::string middleName;
    std::string surname;
    char EGN[MAX_EGN_SIZE + 1];
    unsigned facNum;
    Grade grades[MAX_GRADES_CNT];
};

#endif