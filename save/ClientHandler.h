//
// Created by newbuntu on 08/01/19.
//

#ifndef UNTITLED1_CLIENTHANDLER_H
#define UNTITLED1_CLIENTHANDLER_H
using namespace std;

class ClientHandler {
public:
    template <class T>
    void handleClient(T inputStream,T outputStream);
};

#endif //UNTITLED1_CLIENTHANDLER_H
