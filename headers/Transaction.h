#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <string>
#include<chrono>
#include <vector>
#include<iostream>
#include<iostream>



enum TYPES{ DEPOSIT,WIDTHRAW};

// ---------------- Transaction Class ----------------
class Transaction {
public:
    
    explicit Transaction( std::chrono::time_point<std::chrono::system_clock> time_stamp, double quant,TYPES type_);
    
    
    ~Transaction();

    TYPES getType() const;
    double getAmount() const;
     std::chrono::time_point<std::chrono::system_clock> getTimestamp() const;

private:
    TYPES type;     // "Deposit" or "Withdraw"
    double amount;         // Amount of money
     std::chrono::time_point<std::chrono::system_clock> timestamp; // Date & time string
};

// ---------------- Account Class ----------------
class Account {
public:
    Account(int number, const std::string& name, double initialBalance);

    void deposit(double amount);
    bool withdraw(double amount); // returns false if insufficient funds
    double getBalance() const;
    int getAccountNumber() const;
    std::string getHolderName() const;

    void printStatement() const;

private:
    int accountNumber;
    std::string holderName;
    double balance;
    std::vector<Transaction> history;

    void addTransaction(const std::string& type, double amount);
};


#endif