//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_FILECACHEMANAGER_H
#define UNTITLED1_FILECACHEMANAGER_H
#include <string>
#include <map>
#include "Solver.h"
#include "ClientHandler.h"
#include "CacheManager.h"
using namespace std;

class FileCacheManager : public CacheManager {
    map<string, string> stringMap;
};
#endif //UNTITLED1_FILECACHEMANAGER_H
