#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "Employee.h"
#include "Student.h"
using namespace std;


class Manager: public Employee, public Student{
private:
    string title;
    int dues;
public:
    void getData(string title, int dues){
        Manager::title = title;
        Manager::dues = dues;
    }
    void putData(){
        cout << "Title: " << title << "Dues: " << dues;
    }
};
#endif