#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "Employee.h"
#include "Student.h"
#include <iostream>
class Scientist: public Student, public Employee{
private:
    int no_publication;
public:
    void getData(){
        cout << "Enter number of publication published";
        cin >> no_publication;
    }
    void putData(){
        cout << "Number of published publication: " << no_publication;
    }

};

#endif