#include <iostream>
#include <Account.hpp>
#include <Trust_Account.hpp>
#include <Saving_Account.hpp>
#include <Account_Util.hpp>

using namespace std;

int main() {
    
    cout.precision(2);
    cout << fixed << endl;

    vector <Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Curly",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    //-----------------------------------------//

    vector <Saving_Account> saving_accounts;
    saving_accounts.push_back(Saving_Account{});
    saving_accounts.push_back(Saving_Account{"Superman"});
    saving_accounts.push_back(Saving_Account{"Batman",2000});
    saving_accounts.push_back(Saving_Account{"Wonderwoman",5000, 5.0});

    display(saving_accounts);
    deposit(saving_accounts,1000);
    withdraw(saving_accounts,2000);

    //-----------------------------------------//

    vector <Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account{});
    checking_accounts.push_back(Checking_Account{"Sinderella"});
    checking_accounts.push_back(Checking_Account{"Cheel",2000});
    checking_accounts.push_back(Checking_Account{"Saving_test",5000});

    display(checking_accounts);
    deposit(checking_accounts,1000);
    withdraw(checking_accounts,2000);

    //-----------------------------------------//

    vector <Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Uncharted",10000,5.0});
    trust_accounts.push_back(Trust_Account{"Chiil",20000,4.0});
    trust_accounts.push_back(Trust_Account{"Trust_test",30000});

    display(trust_accounts);
    deposit(trust_accounts,1000);
    withdraw(trust_accounts,3000);

    for(int i = 1;i<=5;i++) {
        withdraw(trust_accounts,1000);
    }



    return 0;
}