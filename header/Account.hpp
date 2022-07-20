#pragma once
#include <string>
#include <iostream>

class Account {
    friend std::ostream &operator <<(std::ostream &os, const Account &account);
private:
    static constexpr const char *default_name = "Unnamed Account";
    static constexpr const double default_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = default_name,double balance = default_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const ;    
    ~Account();
};