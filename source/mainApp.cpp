#include "../headers/Transaction.h"



int main(){


    Transaction t = Transaction( std::chrono::system_clock::now(),2323.02, DEPOSIT);



    std::cout<<t.getAmount()<<std::endl;
    std::cout<<t.getType()<<std::endl;  
        


    return 0;

}