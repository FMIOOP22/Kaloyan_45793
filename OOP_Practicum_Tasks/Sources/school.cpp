#include "../Headers/School.h"
#include <iostream>
#include <fstream>

void School::addStudent()
{
    Student temp;
    std::cin >> temp;
    students.push_back(temp);
}

void School::printAllStudents() const
{
    const int STUDENTS_CNT = students.size();
    for (int i = 0; i < STUDENTS_CNT; ++i)
    {
        std::cout << students[i] << '\n';
    }
}

void School::printStudentsBornInMarch() const
{}

void School::printStudentHighestAverage() const
{
    double maxAverage = students[0].getGradeAverage();
    int maxIndex = 0;
    const int studentCnt = students.size();
    for (int i = 1; i < studentCnt; ++i)
    {
        double currentAverage = students[i].getGradeAverage();
        if (maxAverage < currentAverage)
        {
            maxAverage = currentAverage;
            maxIndex = i;
        }
    }
    students[maxIndex].printFirstAndLastName();
}

void School::sortStudents()
{
    const int STUDENTS_CNT = students.size();
    for (int i = 0; i < STUDENTS_CNT - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < STUDENTS_CNT; ++j)
        {
            if (students[minIndex].getFacNum() > students[j].getFacNum())
            {
                minIndex = j;
            }
        }

        Student temp = students[i];
        students[i] = students[minIndex];
        students[minIndex] = temp;
    }
}

void School::printSorted()
{
    sortStudents();
    const int studentsCnt = students.size();
    for (int i = 0; i < studentsCnt; ++i) {
        students[i].printByThreeNamesAndFacNum();
    }
}

void School::inputStudentsFromFile()
{
    std::ifstream file("input.txt");
    if (file.is_open())
    {
        int studentsCnt = 0;
        file >> studentsCnt;

        for (int i = 0; i < studentsCnt; ++i)
        {
            Student temp;
            file >> temp;
            students.push_back(temp);
        }
    }
    file.close();
}