//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_16_PICKUPTRUCK_H
#define WEEK_16_PICKUPTRUCK_H

#include "Vehicle.h"
class PickupTruck: public Vehicle{
    int drive_type;
public:
    PickupTruck(int yearModel, int mileage, int price, string make, int drive_type);
    void Display();
};


#endif //WEEK_16_PICKUPTRUCK_H
