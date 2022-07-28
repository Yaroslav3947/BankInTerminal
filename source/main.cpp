#include <iostream>
#include <Account.hpp>
#include <Trust_Account.hpp>
#include <Saving_Account.hpp>
#include <Account_Util.hpp>
#include <I_Printable.hpp>
#include <Checking_Account.hpp>

using namespace std;

int main() {
    
    cout.precision(2);
    cout << fixed << endl;


    //-----------------------------------------//

    // Account frank{"Frank", 5000};
    // cout << frank << endl;

    Checking_Account frank{"Frank",5000};
    cout << frank << endl;


    Account *trust = new Trust_Account{"James"};
    cout << *trust << endl;

    Account *p1 = new Checking_Account{"Larry", 10000};
    Account *p2 = new Saving_Account{"Moe", 1000};
    Account *p3 = new Trust_Account{"Curly"};

    vector<Account *> accounts {p1,p2,p3};

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);




    return 0;
}