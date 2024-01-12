// Registration.h
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "Student.h"
#include "Course.h"

class Registration {
public:
    Registration(int registrationId, const Student& student, const Course& course);

    void displayRegistrationInfo() const;

private:
    int registrationId;
    const Student& student;
    const Course& course;
};

#endif // REGISTRATION_H
