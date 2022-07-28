#include <iostream>
#include <Checking_Account.hpp>

Checking_Account::Checking_Account(std::string name, double balance)
    :Account{name, balance} {
}

bool Checking_Account::withdraw(double amount) { 
    amount += default_fee;
    return Account::withdraw(amount);
}
bool Checking_Account::deposit(double amount) { 
    //amount += default_fee;
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Checking Account : " <<  name << ": " << balance << "]";
}

