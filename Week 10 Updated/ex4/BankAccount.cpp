//
// Created by Samir Lama on 2/9/21.
//

#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    string name[10] = {"Ram", "Sam", "Hari", "Sita", "Gita", "Nita", "Lalita", "Lolita", "Monica", "Manita"}, accType[2] = {"Checking", "Saving"};
    int accNumber[10] = {1378,535,45653,6563,67,234,5623,34342,6,2};
    double balance[10] = {5485,5454,868,6472,5454,5741,987,852,874,851};
    BankAccount p[10];
    int val = 1;
    for(int i =0; i < 10; i++){
        p[i].setName(name[i]);
        if(val == 1){
            p[i].setAccountType(accType[0]);
            val = 2;
        }else{
            p[i].setAccountType(accType[0]);
            val = 1;
        }
        p[i].setBalance(balance[i]);
        p[i].setAccountNumber(accNumber[i]);
    }
    //Output
    for(int i = 0; i < 10; i++){
        cout << "Name: " << p[i].getName()
             <<"\nAccount Number: " << p[i].getAccountNumber()
             <<"\nAccount Type: " << p[i].getAccountType()
             <<"\n";

    }
}

