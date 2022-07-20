#pragma once
#include <vector>
#include <Account.hpp>
#include <Trust_Account.hpp>
#include <Saving_Account.hpp>
#include <Checking_Account.hpp>

void display(const std::vector <Account> &accounts);
void deposit(std::vector <Account> &accounts, double amount);
void withdraw(std::vector <Account> &accounts, double amount);

void display(const std::vector <Saving_Account> &accounts);
void deposit(std::vector <Saving_Account> &accounts, double amount);
void withdraw(std::vector <Saving_Account> &accounts, double amount);

void display(const std::vector <Checking_Account> &accounts);
void deposit(std::vector <Checking_Account> &accounts, double amount);
void withdraw(std::vector <Checking_Account> &accounts, double amount);

void display(const std::vector <Trust_Account> &accounts);
void deposit(std::vector <Trust_Account> &accounts, double amount);
void withdraw(std::vector <Trust_Account> &accounts, double amount);