#include <memory>
#include <iostream>
#include <Account.hpp>
#include <I_Printable.hpp>
#include <Account_Util.hpp>
#include <Trust_Account.hpp>
#include <Saving_Account.hpp>
#include <Checking_Account.hpp>

using namespace std;

int main() {
    
    // cout.precision(2);
    // cout << fixed << endl;

    // try {
    //     unique_ptr<Account> moes_ptr = make_unique<Checking_Account>("Moe", 100.0);
    //     cout << *moes_ptr << endl;
    // }
    // catch(const IllegalBalanceExeption& e) {
    //     std::cerr << "I can't create an account - negative balance" << '\n';
    // }
    
    //-----------------------------------------//

    // Account frank{"Frank", 5000};
    // cout << frank << endl;

    // Checking_Account frank{"Frank",5000};
    // cout << frank << endl;


    // Account *trust = new Trust_Account{"James"};
    // cout << *trust << endl;

    // Account *p1 = new Checking_Account{"Larry", 10000};
    // Account *p2 = new Saving_Account{"Moe", 1000};
    // Account *p3 = new Trust_Account{"Curly"};

    // vector<Account *> accounts {p1,p2,p3};

    // display(accounts);
    // deposit(accounts,1000);
    // withdraw(accounts,2000);

    std::unique_ptr<Account> yariks_account;
    std::unique_ptr<Account> natasha_account;
    try {
        yariks_account = std::make_unique<Saving_Account>("Yarik", -2000.0); // Illegal Balance exeption
        std::cout << *yariks_account << std::endl;
    }
    catch (const IllegalBalanceExeption &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try {
        natasha_account = std::make_unique<Saving_Account>("Natasha", 1000.0);
        std::cout << *natasha_account << std::endl;
        natasha_account->withdraw(500.0);
        std::cout << *natasha_account << std::endl;
        natasha_account->deposit(500.0);
        std::cout << *natasha_account << std::endl;
        natasha_account->withdraw(1000.1);
        std::cout << *natasha_account << std::endl;
        
    }
    catch (const IllegalBalanceExeption &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex) {
        std::cerr << ex.what() << std::endl;
    }



    return 0;
}