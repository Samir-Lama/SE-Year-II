//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_16_VEHICLE_H
#define WEEK_16_VEHICLE_H
#include <string>
using namespace std;
class Vehicle {
private:
    int yearModel, mileage, price;
    string make;
public:
    Vehicle(int yearModel, int mileage, int price, string make);

    virtual void Display();
};


#endif //WEEK_16_VEHICLE_H
