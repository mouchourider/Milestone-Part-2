//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_MYSERIALSERVER_H
#define UNTITLED1_MYSERIALSERVER_H
#include "Server.h"
using namespace server_side;
using namespace std;

class MySerialServer : public server_side::Server<string,string>{
public:
    int sockfd;

    void start(int port, int sockfd, ClientHandler *ch);

    void stop() override;

    void open(int port, ClientHandler *c) override;

    MySerialServer(int port, ClientHandler *ch);
};


#endif //UNTITLED1_MYSERIALSERVER_H