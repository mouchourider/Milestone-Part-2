cmake_minimum_required(VERSION 3.12)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS -pthread)

add_executable(Milestone-Part-2 main.cpp Server.h ClientHandler.h Solver.h MySerialServer.cpp MySerialServer.h CacheManager.h MyTestClientHandler.h MyTestClientHandler.cpp StringReverser.cpp StringReverser.h FileCacheManager.cpp FileCacheManager.h CacheBase.h)