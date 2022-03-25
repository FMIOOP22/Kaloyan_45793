#include <iostream>
#include "../Headers/grade.h"
#include "../Headers/student.h"
#include "../Headers/school.h"

int main()
{
    School FMI;
    FMI.inputStudentsFromFile();
     
    //FMI.addStudent();
    //FMI.addStudent();
    //FMI.addStudent();

    FMI.printAllStudents();
    FMI.printStudentHighestAverage();
    FMI.printSorted();

    return 0;
}
