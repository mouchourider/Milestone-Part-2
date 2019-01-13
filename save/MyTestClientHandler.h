//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_MYTESTCLIENTHANDLER_H
#define UNTITLED1_MYTESTCLIENTHANDLER_H
//
// Created by franckito on 12/18/18.
//
#include "Solver.h"
#include "ClientHandler.h"
#include "CacheManager.h"
using namespace std;

class MyTestClientHandler : public ClientHandler {
    CacheManager* cm;
    Solver* solver;
public:
    MyTestClientHandler(CacheManager *cm, Solver* solver);
};

#endif //UNTITLED1_MYTESTCLIENTHANDLER_H
