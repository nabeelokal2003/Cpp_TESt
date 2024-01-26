//
// Created by Home on 1/26/2024.
//

#ifndef OOP_PRACTICE_ACCOUNT_H
#define OOP_PRACTICE_ACCOUNT_H
#include <string>

class Account {
public:
    // Attributes
    std::string name;
    double balance;

    // Methods
    bool deposit(double amount);
    bool withdraw(double);
    void set_name(std::string n);
    void set_balance(int amount);
};

#endif //OOP_PRACTICE_ACCOUNT_H
