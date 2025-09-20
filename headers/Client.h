#include <boost/filesystem.hpp>
#include <iostream>
#include <boost/asio.hpp>

#ifdef   CLIENT_h
# define CLIENT_h


class Client{

    public:

        Client()

        ~Client();



        void sendRequest();



};


extern Client cli;

#endif

