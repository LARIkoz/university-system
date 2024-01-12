// UniversitySystem.cpp
#include "Student.h"
#include "Course.h"
#include "Registration.h"

int main() {
    Student student1(1, "John Doe");
    Student student2(2, "Jane Doe");

    Course course1(101, "Introduction to Programming");
    Course course2(102, "Data Structures");

    Registration registration1(501, student1, course1);
    Registration registration2(502, student2, course2);

    std::cout << "Student Information:" << std::endl;
    student1.displayStudentInfo();
    student2.displayStudentInfo();
    std::cout << std::endl;

    std::cout << "Course Information:" << std::endl;
    course1.displayCourseInfo();
    course2.displayCourseInfo();
    std::cout << std::endl;

    std::cout << "Registration Information:" << std::endl;
    registration1.displayRegistrationInfo();
    registration2.displayRegistrationInfo();

    return 0;
}
