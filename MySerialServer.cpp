//
// Created by newbuntu on 09/01/19.
//
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <cstdlib>
#include <iostream>
#include <thread>
#include "MySerialServer.h"
#include "Server.h"

using namespace std;


MySerialServer::MySerialServer(int port, ClientHandler *ch) : Server(port, ch) {}


void MySerialServer::open(int port, ClientHandler *c) {
    int s = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serv;
    serv.sin_addr.s_addr = INADDR_ANY;
    serv.sin_port = htons(port);
    serv.sin_family = AF_INET;
    if (bind(s, (sockaddr *)&serv, sizeof(serv)) < 0)	{
        cerr << "Bad!" << endl;
    }
    listen(s, 5);
    struct sockaddr_in client;
    socklen_t clilen = sizeof(client);

    timeval timeout;
    timeout.tv_sec = 10;
    timeout.tv_usec = 0;

    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout));
    this->sockfd = s;
    //thread start_routine(&MySerialServer::start,this , sockfd, c);
    //start_routine.join();
}


void MySerialServer::start(int port, int sockfd, ClientHandler* ch) {
    int new_sock;
    bool shouldStop = false;
    struct sockaddr_in client;
    socklen_t clilen = sizeof(client);

    timeval timeout;
    timeout.tv_sec = 10;
    timeout.tv_usec = 0;

    setsockopt(sockfd, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout));

    new_sock = accept(sockfd, (struct sockaddr*)&client, &clilen);
    if (new_sock < 0)	{
        if (errno == EWOULDBLOCK)	{
            cout << "timeout!" << endl;
            exit(2);
        }	else	{
            perror("other error");
            exit(3);
        }
    }
}

void MySerialServer::stop() {
    close(sockfd);
}