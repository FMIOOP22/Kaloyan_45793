#include "../Headers/student.h"
#include <iostream>

void toUpper(char& c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }
}

void Student::printFirstAndLastName() const
{
    std::cout << name << '\n'
        << surname << '\n';
};

double Student::getGradeAverage() const
{
    double total = 0;
    for (int i = 0; i < MAX_GRADES_CNT; ++i)
    {
        total += grades[i].getGrade();
    }
    return total / MAX_GRADES_CNT;
}

void Student::printByThreeNamesAndFacNum() const
{
    std::cout << name << ' ' << middleName << ' ' << surname << ' ' << facNum << '\n';
}

unsigned Student::getFacNum() const
{
    return facNum;
}

std::ostream& operator<<(std::ostream& os, const Student& student)
{
    os << student.name << '\n'
        << student.middleName << '\n'
        << student.surname << '\n'
        << student.EGN << '\n'
        << student.facNum << '\n';

    for (int i = 0; i < MAX_GRADES_CNT; ++i)
    {
        os << student.grades[i];
    }

    return os;
}

std::istream& operator>>(std::istream& is, Student& student)
{
    is >> student.name
        >> student.middleName
        >> student.surname
        >> student.EGN
        >> student.facNum;

    for (int i = 0; i < MAX_GRADES_CNT; ++i)
    {
        is >> student.grades[i];
    }

    toUpper(student.name[0]);
    toUpper(student.middleName[0]);
    toUpper(student.surname[0]);

    return is;
}