//
// Created by newbuntu on 09/01/19.
//

#include "CacheManager.h"
#include "MyTestClientHandler.h"



void MyTestClientHandler::handleClient(string inputStream, string outputStream) {

}

MyTestClientHandler::MyTestClientHandler(CacheManager<string, string> *cm, Solver *solver) : ClientHandler(cm, solver) {

}
