//
// Created by Samir Lama on 2/9/21.
//

#ifndef EX1_CPP_BANKACCOUNT_H
#define EX1_CPP_BANKACCOUNT_H
#include <string>
#include "string.h"
using namespace std;

class BankAccount{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance, interest;
public:
//    BankAccount(string name, int accountNumber, int type, double balance){
//        BankAccount::name = name;
//        BankAccount::accountNumber = accountNumber;
//        if(type == 1){
//            BankAccount::accountType = "Checking";
//        }else if(type == 2){
//            BankAccount::accountType = "Saving";
//        }else{
//            BankAccount::accountType = "No Type";
//        }
//        BankAccount::balance = balance;
//        BankAccount::interest = balance * 0.1;
//    }

    // Setter
    void setName(const string &name) {
        BankAccount::name = name;
    }

    void setAccountNumber(int accountNumber) {
        BankAccount::accountNumber = accountNumber;
    }

    void setAccountType(const string &accountType) {
        BankAccount::accountType = accountType;
    }

    void setBalance(double balance) {
        BankAccount::balance = balance;
    }

    void setInterest(double interest) {
        BankAccount::interest = balance * 0.1;
    }

    // Getter
    const string &getName() const {
        return name;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    const string &getAccountType() const {
        return accountType;
    }

    double getBalance() const {
        return balance;
    }

    double getInterest() const {
        return interest;
    }


};


#endif //EX1_CPP_BANKACCOUNT_H
