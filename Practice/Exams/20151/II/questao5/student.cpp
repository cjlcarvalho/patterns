#include "student.h"

#include <iostream>

using namespace std;

Student::Student(double grade) :
    m_grade(grade)
{

}

void Student::addGrade(double grade)
{
    m_grade += grade;
}

void Student::showGrade()
{
    cout << m_grade << endl;
}
