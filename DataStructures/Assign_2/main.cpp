//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#include <stdio.h>
#include <string>
#include <iostream>
#include "bank_account.h"

using namespace std;

int main(int argc, char **argv)
{
    //following the video here, all standard
	bank_account b;
    string owner_input;
    double depositedMoney, withdrawMoney;
    
    //taking in input then testing methods
    cout << "Please enter your name for the bank account.";
    cin >> owner_input;
    b.changeOwner(owner_input);
    
    cout << "How much money would you like to deposit?";
    cin >> depositedMoney;
    b.deposit(depositedMoney);
    
    cout << "How much money would you like to withdraw?";
    cin >> withdrawMoney;
    b.withdraw(withdrawMoney);
    
    b.currentBalance();
    b.currentUser();
    
    //b gets put into trash collection here
}
