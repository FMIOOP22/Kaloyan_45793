#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade
{
public:
    friend std::ostream& operator<<(std::ostream& os, const Grade& grade);
    friend std::istream& operator>>(std::istream& is, Grade& grade);
    double getGrade() const;

private:
    std::string subject;
    double grade;
};

#endif