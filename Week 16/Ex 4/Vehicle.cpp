//
// Created by Samir Lama on 3/1/21.
//

#include "Vehicle.h"
#include <iostream>
using namespace std;
Vehicle::Vehicle(int yearModel, int mileage, int price, string make) {
    Vehicle::yearModel = yearModel;
    Vehicle::mileage = mileage;
    Vehicle::price = price;
    Vehicle::make = make;
}

void Vehicle::Display() {
    cout << "Model made in: " << yearModel << "\n"
    << "Mileage: " << mileage << "\n"
    << "Price: " << price << "\n"
    << "Makde By: " << make << "\n";
}