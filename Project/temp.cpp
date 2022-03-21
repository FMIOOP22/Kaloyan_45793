#include <iostream>
#include <string>
#include <vector>

const int MAX_GRADES_CNT = 5;

struct Console 
{
    std::string command;
    void start() 
    {
        while (command != "EXIT") 
        {
            std::cin >> command;
            // .... switch if depending on cmd
        }
    }
};

struct Grade 
{
    std::string subject;
    double grade;
};

struct Student 
{
    std::string name;
    std::string middleName;
    std::string surname;
    unsigned facNum;
    Grade grades[MAX_GRADES_CNT];

    void readFromConsole();
    void printGrades();
};

class School 
{
    public:

    void addStudent();
    //void inputStudentsFromFile();
    void printStudent(Student& student);
    void printStudentsInMarch();
    void printStudentHighestAverage();
    
    private:

    std::vector <Student> Students;

     void sortStudents();
};

void School::addStudent() 
{
    const int studentCnt = Students.size();
    Students[studentCnt].readFromConsole();
}

void School::printStudent(Student& student)
{
    std::cout << student.name << '\n'
              << student.middleName << "\n"
              << student.surname << '\n'
              << student.facNum << '\n';
    student.printGrades();
}

void Student::printGrades() 
{
    for (int i = 0; i < MAX_GRADES_CNT; ++i) 
    {
        std::cout << grades[i].subject << '\n';
        std::cout << grades[i].grade << '\n';
    }
}

void Student::readFromConsole() 
{
    std::cin >> name >> middleName >> surname >> facNum;
    for (int i = 0; i < MAX_GRADES_CNT; ++i) 
    {
        std::cin >> grades[i].subject >> grades[i].grade;
    }
}


int main() 
{

    return 0;
}
