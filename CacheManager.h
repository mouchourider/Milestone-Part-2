//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_CACHEMANAGER_H
#define UNTITLED1_CACHEMANAGER_H
using namespace std;

class CacheManager {
public:
    template <class T>
    bool exist(string key);
    template <class T>
    T get(string key);
    template <class T>
    void set(string key, T value);
};
#endif //UNTITLED1_CACHEMANAGER_H
