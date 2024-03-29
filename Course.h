// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course {
public:
    Course(int courseId, const std::string& title);

    void displayCourseInfo() const;

private:
    int courseId;
    std::string title;
};

#endif // COURSE_H
