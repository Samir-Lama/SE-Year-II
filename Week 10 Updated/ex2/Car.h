//
// Created by Samir Lama on 2/9/21.
//

#ifndef EX1_CPP_CAR_H
#define EX1_CPP_CAR_H
#include <iostream>
using namespace std;

class Car{
private: int yearModel, make, speed;
public:
    // Constructor
    Car(int yearModel, int make, int speed = 0){
        Car::yearModel = yearModel;
        Car::make = make;
        Car::speed = speed;
    }

    // Setter
    void setYearModel(int yearModel) {
        Car::yearModel = yearModel;
    }

    void setMake(int make) {
        Car::make = make;
    }

    void setSpeed(int speed) {
        Car::speed = speed;
    }

    // Getter
    int getYearModel() const {
        return yearModel;
    }

    int getMake() const {
        return make;
    }

    int getSpeed() const {
        return speed;
    }

    // Accelarator
    void accelarate(){
        speed += 5;
        cout << "Speed after accelaration: " << speed;
    }

    // Brake
    void brake(){
        speed -= 5;
        cout << "Speed after brake: " << speed;
    }
};


#endif //EX1_CPP_CAR_H
