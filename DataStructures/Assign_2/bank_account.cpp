//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#include "bank_account.h"
#include <string>
#include <cassert>
#include <iostream>

//namespace is unnessary using std::

//standard constructor
bank_account::bank_account()
{
    accountMoney = 0;
    accountUser = "";
}

/*bank_account::bank_account(double money, string owner)
{
    accountMoney = money;
    accountUser = owner;
}*/// not used because no overloading yet

//as shown in the video
//Precondition: the given amount must be nonnegative
//Postcondition: adds the given amount and prints out how much was added
void bank_account::deposit(double money)
{
    assert(money >= 0);
    accountMoney += money;
    std::cout << "You have depostited $" << money << " to your bank account.\n";
}

//same principle as deposit
//Precondition: the money taken out has to be less than the current balance
//Postcondition: subtracts the given and prints out the amount of money taken out of the account
void bank_account::withdraw(double money)
{
    assert(accountMoney - money >= 0);
    accountMoney -= money;
    std::cout << "You have withdrawn $" << money << " from your bank account.\n";
}

//Postcondition: changes the owner
void bank_account::changeOwner(std::string owner)
{
    accountUser = owner;
}

//Postcondition: prints out the current balance
const void bank_account::currentBalance()
{
    std::cout << "Your current bank balance is: $" << accountMoney << std::endl; 
}

//Postcondition: prints out the current user
const void bank_account::currentUser()
{
    std::cout << "Your current bank owner is: $" << accountUser << std::endl; 
}


//Precondition: the bank_account needs to exist
//Postcondition: puts current bank_account into trash collection
bank_account::~bank_account()
{
    std::cout << "Bank account under " << accountUser << " has been terminated.";
}

