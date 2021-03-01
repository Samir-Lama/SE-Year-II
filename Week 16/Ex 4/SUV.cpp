//
// Created by Samir Lama on 3/1/21.
//

#include "SUV.h"
#include "Vehicle.h"
SUV::SUV(int yearModel, int mileage, int price, string make, int capacity): Vehicle(yearModel, mileage, price, make){
    SUV::capacity = capacity;
}


void SUV::Display() {
    Vehicle::Display();
    cout << "Capacity: " << capacity << "\n";
}
