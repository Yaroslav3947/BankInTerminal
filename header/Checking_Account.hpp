#pragma once
#include <iostream>
#include "Account.hpp"


class Checking_Account : public Account {
private:
    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;

public:
    Checking_Account(std::string name = default_name, double balance = default_balance);
    virtual void print(std::ostream &os) const override;
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual ~Checking_Account() = default;

};