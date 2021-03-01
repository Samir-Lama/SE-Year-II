//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_16_SUV_H
#define WEEK_16_SUV_H


class SUV: public Vehicle {
    int capacity;
public:
    SUV(int yearModel, int mileage, int price, string make, int capacity);
    void Display();
};


#endif //WEEK_16_SUV_H
