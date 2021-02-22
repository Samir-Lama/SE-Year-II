#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee{
private:
    string name;
    int emp_no;
public:
    void getData(string name, int emp_no){
        Employee::name = name;
        Employee::emp_no = emp_no;
    }

    void putData(){
        cout << "Employee Name: " << name << "\n" << "Employee Number: " << emp_no;
    }

};
#endif