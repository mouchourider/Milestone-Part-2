#include <iostream>
#include <fstream>
#include <string>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*************************************************************************************
* Function name: main
* Input: none
* Output: none
* Function Operation: Gets as argument a string which is a location of a script to run.
**************************************************************************************/
#include "MySerialServer.h"
#include "Server.h"
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "ClientHandler.h"
#include <string>
using namespace server_side;

    int main(int argc, char **argv) {

        Server<string,string>* s = new MySerialServer(atoi(argv[1]), new MyTestClientHandler(new FileCacheManager(), new StringReverser()));

        return 0;
    }