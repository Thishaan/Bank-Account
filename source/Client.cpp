#include "../headers/Client.h"


using boost::asio::ip::tcp;

#define buffer_size 1024

Client::Client( ) = default;


Client::~Client() = default;



void Client::sendRequest(){




try{

	

   boost::asio::io_context io_context;
   tcp::socket socket(io_context);
   socket.connect(tcp::endpoint(boost::asio::ip::make_address(server_ip), 12345));


 std::cout << "Connected to server at " << server_ip << std::endl;

 char data[buffer_size];



}

 while (true) {
            std::string message;
            std::cout << "You: ";
            std::getline(std::cin, message);

            boost::system::error_code error;
            boost::asio::write(socket, boost::asio::buffer(message), error);

            if (error) throw boost::system::system_error(error);

            // Read server response
            std::memset(data, 0, sizeof(data));
            size_t length = socket.read_some(boost::asio::buffer(data), error);
            if (error == boost::asio::error::eof) break;
            else if (error) throw boost::system::system_error(error);

            std::cout << "Server: " << data << std::endl;
        }



ss

}
