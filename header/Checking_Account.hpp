#pragma once
#include <iostream>
#include "Account.hpp"


class Checking_Account : public Account {
    friend std::ostream &operator << (std::ostream &os, const Checking_Account &accout);
private:
    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;

public:
    Checking_Account(std::string name = default_name, double balance = default_balance);
    bool withdraw(double amount);

};