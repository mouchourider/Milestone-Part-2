//
// Created by newbuntu on 08/01/19.
//

#ifndef UNTITLED1_CLIENTHANDLER_H
#define UNTITLED1_CLIENTHANDLER_H

#include "CacheManager.h"
#include "Solver.h"
using namespace std;

template <class T, class S>
class ClientHandler {
    CacheManager<T,S>* cm;

    Solver* solver;
public:
    ClientHandler(CacheManager<T, S> *cm, Solver *solver) : cm(cm), solver(solver) {}

    virtual void handleClient(T inputStream,S outputStream) = 0;
};

#endif //UNTITLED1_CLIENTHANDLER_H
