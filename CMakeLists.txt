cmake_minimum_required(VERSION 3.20)
project(Zvejybinis_Laivas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zvejybinis_Laivas main.cpp Zvejas.cpp Zvejas.h TransportoPriemone.cpp TransportoPriemone.h Laivas.cpp Laivas.h Motorinis.cpp Motorinis.h)
