#pragma once
#include <Account.hpp>

class Saving_Account : public Account {
private:
    static constexpr const char *default_name = "Unnamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_int_rate = 0.0;
protected:
    double int_rate;
public:
    Saving_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Saving_Account() = default;
};