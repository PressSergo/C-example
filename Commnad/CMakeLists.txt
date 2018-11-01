cmake_minimum_required(VERSION 3.8)
project(Commnad)

set(CMAKE_CXX_STANDARD 11)

add_executable(Commnad main.cpp Command/Comand.h Process/process.h Reciver/Reciver.h)