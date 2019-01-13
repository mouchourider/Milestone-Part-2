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
#include "Server.h"
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
using namespace server_side;

namespace boot {
    int main(int argc, char **argv) {
        MySerialServer *s = new MySerialServer();
        s->open(argv[1], new MyTestClientHandler();
        return 0;
    }
}