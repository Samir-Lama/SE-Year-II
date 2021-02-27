#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;
class Employee{
private:
    string name;
    int emp_no;
public:
    void getData(){
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> emp_no;
    }

    void putData(){
        cout << "Employee Name: " << name << "\n" << "Employee Number: " << emp_no;
    }

};
#endif