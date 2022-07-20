#include <iostream>
#include "Account_Util.hpp"

void display(const std::vector <Account> &accounts) {
    std::cout << "\t\tAccounts" << std::endl;
    for(const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Account> &accounts, double amount) {
    std::cout << "\t\tDeposit to Accounts" << std::endl;
    for(auto &acc : accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " <<  acc << std::endl;
        } else {
            std::cout << "Failed to deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <Account> &accounts, double amount) {
    std::cout << "\t\t Withdrawing from Accounts" << std::endl;
    for(auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " <<  acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}


//--------------------------------------------------------------------//


void display(const std::vector <Saving_Account> &accounts) {
    std::cout << "\t\tSaving_Account" << std::endl;
    for(const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Saving_Account> &accounts, double amount) {
    std::cout << "\t\tDeposit to Saving_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " <<  acc << std::endl;
        } else {
            std::cout << "Failed to deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <Saving_Account> &accounts, double amount) {
    std::cout << "\t\t Withdrawing from Saving_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " <<  acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}


//--------------------------------------------------------------------//


void display(const std::vector <Checking_Account> &accounts) {
    std::cout << "\t\tChecking_Account" << std::endl;
    for(const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Checking_Account> &accounts, double amount) {
    std::cout << "\t\tDeposit to Checking_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " <<  acc << std::endl;
        } else {
            std::cout << "Failed to deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <Checking_Account> &accounts, double amount) {
    std::cout << "\t\t Withdrawing from Checking_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " <<  acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}


//--------------------------------------------------------------------//


void display(const std::vector <Trust_Account> &accounts) {
    std::cout << "\t\tTrust_Account" << std::endl;
    for(const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Trust_Account> &accounts, double amount) {
    std::cout << "\t\tDeposit to Trust_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " <<  acc << std::endl;
        } else {
            std::cout << "Failed to deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <Trust_Account> &accounts, double amount) {
    std::cout << "\t\t Withdrawing from Trust_Account" << std::endl;
    for(auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " <<  acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}
