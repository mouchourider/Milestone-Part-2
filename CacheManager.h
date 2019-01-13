//
// Created by newbuntu on 09/01/19.
//

#ifndef UNTITLED1_CACHEMANAGER_H
#define UNTITLED1_CACHEMANAGER_H
#include <string>
#include <map>
using namespace std;

class CacheManager {};

template <class T, class S> struct CacheManagerB: CacheManager{
    virtual bool exist(T key) = 0;
    virtual S get(T key) = 0;
    virtual void set(T key, S value) = 0;
};
#endif //UNTITLED1_CACHEMANAGER_H
