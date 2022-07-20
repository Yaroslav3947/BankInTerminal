#include <iostream>
#include <Trust_Account.hpp>

int CounterOfWithdrawals{0};
Trust_Account::Trust_Account(std::string name,double balance, double int_rate) 
    : Saving_Account{name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
    if(amount >= 5000) {
        amount += bonus;
    }
    return Saving_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount) {
    if((CounterOfWithdrawals >= max_number_of_withdrawals) || (balance * trust_interest < amount)) {
        return false;
    } else {
        ++CounterOfWithdrawals;
        return Saving_Account::withdraw(amount);
    }
}
std::ostream &operator <<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ": " << account.int_rate << "%]";
    return os;
}