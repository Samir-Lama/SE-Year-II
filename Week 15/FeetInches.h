//
// Created by Samir Lama on 2/20/21.
//

#ifndef WEEK_15_FEETINCHES_H
#define WEEK_15_FEETINCHES_H


class FeetInches {
private:
    int feet, inches;
    void simplify();

public:
    FeetInches(int feet, int inches){
        FeetInches::feet = feet;
        FeetInches::inches = inches;
        simplify();
    }

    void setFeet(int feet) {
        FeetInches::feet = feet;
    }

    void setInches(int inches) {
        FeetInches::inches = inches;
    }

    int getFeet() const {
        return feet;
    }

    int getInches() const {
        return inches;
    }

    FeetInches operator + (const FeetInches &);
    FeetInches operator <= (const FeetInches &);
    FeetInches operator - (const FeetInches &);

};


#endif //WEEK_15_FEETINCHES_H
