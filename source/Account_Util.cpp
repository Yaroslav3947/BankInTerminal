#include <iostream>
#include "Account_Util.hpp"

void display(const std::vector <Account *> &accounts) {
    std::cout << "\t\tAccount" << std::endl;
    for(const auto acc : accounts) {
        std::cout << *acc << std::endl;
    }
}

void deposit(std::vector <Account *> &accounts, double amount) {
    std::cout << "\t\tDeposit" << std::endl;
    for(auto acc : accounts) {
        if(acc->deposit(amount)) {
            std::cout << "Deposited " << amount << " to " <<  *acc << std::endl;
        } else {
            std::cout << "Failed to deposit of " << amount << " to " << *acc << std::endl;
        }
    }
}

void withdraw(std::vector <Account *> &accounts, double amount) {
    std::cout << "\t\t Withdrawing " << std::endl;
    for(auto acc : accounts) {
        if(acc->withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " <<  *acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << *acc << std::endl;
        }
    }
}