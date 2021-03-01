//
// Created by Samir Lama on 3/1/21.
//

#include "Cars.h"
#include "Vehicle.h"

Cars::Cars(int yearModel, int mileage, int price, string make, int numberOfDoors): Vehicle(yearModel, mileage, price, make) {
    Cars::numberOfDoors = numberOfDoors;
}

void Cars::Display() {
    Vehicle::Display();
    cout << "Number of Doors: " << numberOfDoors << "\n";
}
