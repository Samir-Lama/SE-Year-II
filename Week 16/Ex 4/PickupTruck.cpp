//
// Created by Samir Lama on 3/1/21.
//

#include "PickupTruck.h"
PickupTruck::PickupTruck(int yearModel, int mileage, int price, string make, int drive_type) : Vehicle(yearModel, mileage, price, make){
    PickupTruck::drive_type = drive_type;
}

void PickupTruck::Display() {
    Vehicle::Display();
    string drive = (drive_type == 1) ? "Two-Wheel" : "Four-Wheel";
    cout << "Drive Type: " << drive << "\n";
}