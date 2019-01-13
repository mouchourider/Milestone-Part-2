//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_CACHEMANAGER_H
#define UNTITLED1_CACHEMANAGER_H
#include <string>
using namespace std;

template <class T, class S>
class CacheManager {
public:
    virtual bool exist(T key) = 0;
    virtual S get(T key) = 0;
    virtual void set(T key, S value) = 0;
};
#endif //UNTITLED1_CACHEMANAGER_H
