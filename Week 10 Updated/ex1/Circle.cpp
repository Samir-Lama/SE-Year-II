//
// Created by Samir Lama on 2/9/21.
//

#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle(double r){
    radius = r;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getArea(){
        double area = pi * radius * radius;
        return area;
}
int main(){

}

