//
// Created by newbuntu on 09/01/19.
//

#include "FileCacheManager.h"

FileCacheManager::FileCacheManager(const map<string, string> &stringMap) : stringMap(stringMap) {}

FileCacheManager::FileCacheManager() {}

bool FileCacheManager::exist(string key) {
    return false;
}

string FileCacheManager::get(string key) {
    return std::__cxx11::string();
}

void FileCacheManager::set(string key, string value) {

}
