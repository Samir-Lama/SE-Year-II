//
// Created by Samir Lama on 2/9/21.
//

#include "Car.h"
#include <iostream>
#include <string.h>
using namespace std;

//void displayMenu(){
//    cout << "What action do you want to perform: "
//            "\n1. Get Car Information"
//            "\n2. Set Car Information"
//            "\n3. Accelarate"
//            "\n4. Brake"
//            "\n Enter action ";
//}


int main(){
    int year, make, speed, choice, res;
    bool loop = true;
    char redo[1];
    cout << "Enter car manufactured year: ";
    cin >> year;
    cout << "Enter car year: ";
    cin >> make;
    cout << "Enter car speed: ";
    cin >> speed;
    Car c = {year, make, speed};
    while (loop){
        cout << "\nWhat action do you want to perform"
                "\n1. Accelarate"
                "\n2. Brake"
                "\nEnter your option no. action: ";
        cin >> choice;
        switch (choice) {
            case 1:
                c.accelarate();
                break;
            case 2:
                c.brake();
                break;
            default:
                cout << "\nInvalid Action\n";
        }
        cout << "\nDo you want to continue(Y/N): ";
        cin >> redo;
        res = strcmp(redo, "Y");
        if(res != 0){
            loop = false;
        }else{
            loop = true;
        }

    }
}


