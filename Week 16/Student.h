#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{
private:
    string school, degree;
public:
    void getData(string school, string degree){
        Student::school = school;
        Student::degree = degree;
    }
    void putData(){
        cout << "School: " << school << "\n" << "Degree: " << degree;
    };
};

#endif
