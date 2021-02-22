//
// Created by Samir Lama on 2/9/21.
//

#include "Circle.h"
#include <iostream>
using namespace std;


int main(){
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle circle = r;

    circle.setRadius(r);
    cout << "Circle Area is: " << circle.getArea();
    cout << "\nCircle Diamtere is " << circle.getDiameter();
    cout << "\nCircle Circumference is " << circle.getCircumference();
    return 0;
}

