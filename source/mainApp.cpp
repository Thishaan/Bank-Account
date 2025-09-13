#include "../headers/Transaction.h"




int main(){

    Account account =  Account(2398039222, "Alan", 34);


    account.deposit(23);

    account.printStatement();

    return 0;

}
