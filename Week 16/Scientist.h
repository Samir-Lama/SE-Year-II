#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "Employee.h"
#include "Student.h"
class Scientist: public Student, public Employee{
private:
    int no_publication;
public:
    void getData(int no_publication){
        Scientist::no_publication = no_publication;
    }
    void putData(){
        cout << "Number of publication: " << no_publication;
    }

};

#endif