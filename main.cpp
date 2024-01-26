#include <iostream>
#include "Account.h"
using namespace std;

class Player{
public:
    // Attributes
private:
    string name;
    int HP;
    int XP;

    // Methods
public:
    void talk(string text){ cout << name << " says: " << text << endl;}
    bool is_dead();
};


int main() {
    Account nabeel_account;
    nabeel_account.set_name("Nabeel's Account");
    nabeel_account.set_balance(1000.0);

    if(nabeel_account.deposit(200.0)){
        cout << "Deposit Successful." << endl;
    }else{
        cout << "Deposit not allowed." << endl;
    }

    if(nabeel_account.withdraw(500.0)){
        cout << "Withdrawal Successful." << endl;
    }else {
        cout << "Not sufficient funds." << endl;
    }
    if(nabeel_account.withdraw(1500.0)){
        cout << "Withdrawal Successful." << endl;
    }else {
        cout << "Not sufficient funds." << endl;
    }
    return 0;

}
