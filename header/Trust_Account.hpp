#pragma once
#include <Saving_Account.hpp>

class Trust_Account : public Saving_Account {
    friend std::ostream &operator << (std::ostream &os, const Trust_Account &accout);
private:
    static constexpr const char *default_name = "Unnamed Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_int_rate = 0.0;
    static constexpr double trust_interest = 0.2;
    static constexpr int bonus = 50;
    static constexpr int max_number_of_withdrawals = 3;
public:
    Trust_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};