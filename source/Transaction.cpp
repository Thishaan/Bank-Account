#include "../headers/Transaction.h"


    Transaction::Transaction( std::chrono::time_point<std::chrono::system_clock> time_stamp, double quant,TYPES type_) :
         timestamp(time_stamp) , amount(quant), type(type_)  {};



    Transaction::~Transaction() =  default;  // use defult constuctor

    TYPES Transaction::getType() const{

        return this->type; //
    }
    double Transaction::getAmount() const{

        return this->amount;
    }

     std::chrono::time_point<std::chrono::system_clock> Transaction::getTimestamp() const{

        return this->timestamp;
    }





