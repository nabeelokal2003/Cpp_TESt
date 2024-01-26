//
// Created by Home on 1/26/2024.
//


#include "Account.h"
void Account::set_name(std::string n) { name = n; }
void Account::set_balance(int amount) { balance = amount; }
bool Account::deposit(double amount) { balance += amount; }
bool Account::withdraw(double amount){
    if(balance - amount >= 0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}
