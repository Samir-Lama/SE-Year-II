//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_16_CARS_H
#define WEEK_16_CARS_H
#include "Vehicle.h"

class Cars: public Vehicle {
private: int numberOfDoors;
public:
    Cars(int yearModel, int mileage, int price, string make,int numberOfDoors);
    void Display();
};


#endif //WEEK_16_CARS_H
