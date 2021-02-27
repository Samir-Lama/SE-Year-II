 #include <iostream>
#include "Ex 1/Employee.h"
#include "Ex 1/Manager.h"
#include "Ex 1/Student.h"
#include "Ex 1/Scientist.h"
#include "Ex 1/Laborer.h"
int main() {
    Employee emp;
    emp.getData("Ram", 220);

    Manager manager;
    manager.getData("Principal", 500);

    Student student;
    student.getData("NAMI", "Computing");

    Scientist scientist;
    scientist.getData(50);

    Laborer laborer;
    laborer.getData("Sam", 20);


    emp.putData();
    cout << "\n";
    manager.putData();
    cout << "\n";
    student.putData();
    cout << "\n";
    scientist.putData();
    cout << "\n";
    laborer.putData();
}
