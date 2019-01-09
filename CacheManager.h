//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_CACHEMANAGER_H
#define UNTITLED1_CACHEMANAGER_H
using namespace std;

class CacheManager {
public:
    bool exist(string key);
    template <class T>T get(string key);
    void set(string key, T value);
};
#endif //UNTITLED1_CACHEMANAGER_H
