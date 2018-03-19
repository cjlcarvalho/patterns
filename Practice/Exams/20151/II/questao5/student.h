#ifndef STUDENT_H
#define STUDENT_H

#include "component.h"

class Student : public Component
{
public:
    Student(double grade);
    void addGrade(double grade) override;
    void showGrade() override;

private:
    double m_grade;
};

#endif // STUDENT_H
