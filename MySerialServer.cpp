//
// Created by newbuntu on 09/01/19.
//
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <cstdlib>
#include <iostream>
#include "MySerialServer.h"
#include "Server.h"
using namespace std;

void MySerialServer::start(int sockfd) {
    int new_sock;
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
    cout << new_sock << endl;
    cout << sockfd << endl;
}

void MySerialServer::open(int port, ClientHandler c) {

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
    start(s);
}

void MySerialServer::stop() {
    close(sockfd);
}