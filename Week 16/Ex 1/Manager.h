#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include <iostream>
#include "Employee.h"
#include "Student.h"
using namespace std;


class Manager: public Employee, public Student{
private:
    string title;
    int dues;
public:
    void getData(){
       cout << "Enter Manger title: ";
       cin >> title;
       cout << "Enter Manager dues: ";
       cin >> dues;
    }
    void putData(){
        cout << "Manger title: " << title << "Manger dues: " << dues;
    }
};
#endif