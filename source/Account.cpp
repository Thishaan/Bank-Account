#include "../headers/Transaction.h"
#include <ctime>



    Account::Account(int number, const std::string& name, double initialBalance):

    accountNumber(number), holderName(name), balance(initialBalance){};

    void Account::deposit(double amount){


        if(balance>=0 ){
            this->balance += amount;
            history.push_back(Transaction(std::chrono::system_clock::now(), amount, DEPOSIT));     
        }

    }
    void  Account::withdraw(double amount){
        

         if(balance>=amount+ lower_threshold){
            this->balance -= amount;  
             history.push_back(Transaction(std::chrono::system_clock::now(), amount, WIDTHRAW));   
        }
        
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


        for(auto t : history){

            auto time=std::chrono::system_clock::to_time_t(t.getTimestamp());

            std::cout<< "Amount : " << t.getAmount()<< std::endl;

            std::cout<< "Time : " << time<< std::endl;

        }
 
    }


    void Account::update_history(Transaction t){

            this->history.push_back(t);

    }