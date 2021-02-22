//
// Created by Samir Lama on 2/9/21.
//

#include "PayRoll.h"
#include <iostream>
using namespace std;



int main(){
    double hourRate, hoursWorked;
    bool condition = true;
    PayRoll Emp[7];
    for (int i = 0; i < 7; i++) {
        cout << "Enter following information of employee " << i+1;
        cout << "\nHour Rate: ";
        cin >> hourRate;
        while(condition){
            cout << "Hours Worked: ";
            cin >> hoursWorked;
            if(hoursWorked > 60){
                cout << "Invalid Input!! Retry!!\n";
            }else{
                condition = false;
            }
        }
        condition = true;
        Emp[i].setHourRate(hourRate);
        Emp[i].setHoursWorked(hoursWorked);
        Emp[i].setTotalPay();
    }

    //Output
    for (int i = 0; i < 7; i++) {
        cout << "\nEmployee no. " << i+1 << " total pay = Rs." << Emp[i].getTotalPay();
    }
}
