//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_MYSERIALSERVER_H
#define UNTITLED1_MYSERIALSERVER_H
#include "Server.h"
using namespace server_side;
using namespace std;

class MySerialServer : server_side::Server{
public:
    void open(int port, ClientHandler c) override;

    void start(int port);

    void stop() override;

    MySerialServer();
};

#endif //UNTITLED1_MYSERIALSERVER_H