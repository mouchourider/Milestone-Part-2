//
// Created by newbuntu on 08/01/19.
//

#ifndef UNTITLED1_CLIENTHANDLER_H
#define UNTITLED1_CLIENTHANDLER_H

#include "CacheManager.h"
#include "Solver.h"
#include "iostream"
using namespace std;

struct ClientHandler { virtual ~ClientHandler() = default; };


template <class T, class S> struct ClientHandlerB : ClientHandler {
private:
    CacheManager* cm;
    Solver* solver;
public:
    virtual void handleClient(S inputStream,T outputStream) = 0;

    ClientHandlerB(CacheManager *cm, Solver *solver) : cm(cm), solver(solver) {}
};

#endif //UNTITLED1_CLIENTHANDLER_H
