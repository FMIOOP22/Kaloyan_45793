#include "../Headers/grade.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Grade& grade)
{
    os << grade.subject << '\n' << grade.grade << '\n';
    return os;
}

std::istream& operator>>(std::istream& is, Grade& grade)
{
    is >> grade.subject >> grade.grade;
    return is;
}

double Grade::getGrade() const
{
    return grade;
}