#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;

class Student{
private:
    string school, degree;
public:
    void getData(){
        cout << "Enter school name: ";
        cin >> school;
        cout << "Enter degree name: ";
        cin >> degree;
    }
    void putData(){
        cout << "School: " << school << "\n" << "Degree: " << degree;
    };
};

#endif
