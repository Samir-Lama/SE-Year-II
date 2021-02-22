//
// Created by Samir Lama on 2/9/21.
//

#ifndef EX1_CPP_CIRCLE_H
#define EX1_CPP_CIRCLE_H


class Circle {
private:
    double radius, pi =3.14159;

public:
    Circle(double r){
        radius = r;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius(){
        return radius;
    }

    double getArea(){
        double area = pi * radius * radius;
        return area;
    }

    double getDiameter(){
        double diameter = radius * 2;
        return diameter;
    }

    double getCircumference(){
        double circumference = 2 * pi * radius;
        return circumference;
    }
};


#endif //EX1_CPP_CIRCLE_H
