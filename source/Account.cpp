#include "../headers/Transaction.h"



// 


    Account::Account(int number, const std::string& name, double initialBalance):

    accountNumber(number), holderName(name), balance(initialBalance){};

    void Account::deposit(double amount){


        if(balance>=0 ){
            this->balance += amount;     
        }

    }
    bool Account::withdraw(double amount){

    } // returns false if insufficient funds
    double Account::getBalance() const{
        return this->balance;
    }
    int Account::getAccountNumber() const{
           return this->accountNumber;
    }
    std::string Account::getHolderName() const{

        return this->holderName;
    }

    void Account::printStatement() const{

    }