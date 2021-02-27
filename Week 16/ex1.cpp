#include <iostream>
using namespace std;
#include "Ex 1/Employee.h"
#include "Ex 1/Manager.h"
#include "Ex 1/Scientist.h"
#include "Ex 1/Laborer.h"
int main(){
    // Using Employee
    cout << "Employee\n";
    Employee *emp1 = new Employee();
    emp1->getData();
    emp1->putData();

    // Manager
    cout << "Manager\n";
    Manager *manager = new Manager();
    manager->getData();
    manager->putData();

    // Scientist
    cout << "Scientist\n";
    Scientist *scientist = new Scientist();
    scientist->getData();
    scientist->putData();

    // Student
    cout << "Student\n";
    Student *student = new Student();
    student->getData();
    student->putData();

    // Laborer
    cout << "Laborer\n";
    Laborer *laborer = new Laborer();
    laborer->getData();
    laborer->putData();
}
