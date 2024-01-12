// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
public:
    Student(int studentId, const std::string& name);

    void displayStudentInfo() const;

private:
    int studentId;
    std::string name;
};

#endif // STUDENT_H
