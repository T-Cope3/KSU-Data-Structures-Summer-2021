//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>


class bank_account
{
public:
    bank_account();
    //bank_account(double money, string owner); no overloading yet
    ~bank_account();

    void deposit(double money);
    void withdraw(double money);
    void changeOwner(std::string owner);
    const void currentBalance();
    const void currentUser();

private:
    double accountMoney;
    std::string accountUser;
};

#endif // BANK_ACCOUNT_H
