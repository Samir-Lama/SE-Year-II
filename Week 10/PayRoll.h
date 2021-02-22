//
// Created by Samir Lama on 2/9/21.
//

#ifndef EX1_CPP_PAYROLL_H
#define EX1_CPP_PAYROLL_H


class PayRoll{
private:
    double hourRate, hoursWorked, totalPay = 0;
public:
//    PayRoll() {
//        PayRoll::hourRate = hourRate;
//        PayRoll::hoursWorked = hoursWorked;
//    };

    void setHourRate(double hourRate) {
        PayRoll::hourRate = hourRate;
    }

    void setHoursWorked(double hoursWorked) {
        PayRoll::hoursWorked = hoursWorked;
    }

    void setTotalPay(){
        totalPay = hourRate * hoursWorked;
    }

    double getTotalPay(){
        return totalPay;
    };
};


#endif //EX1_CPP_PAYROLL_H
