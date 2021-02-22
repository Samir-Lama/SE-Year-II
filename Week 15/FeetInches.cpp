//
// Created by Samir Lama on 2/20/21.
//

#include "FeetInches.h"
#include <iostream>
using namespace std;

void FeetInches::simplify() {
    if (inches >= 12)
    {
        feet += (inches / 12);
        inches = inches % 12;
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

FeetInches FeetInches::operator<=(const FeetInches &feetInches) {
    if(feetInches.feet > feet || feetInches.feet == feet){
        return true;
    }
}
int main(){

}