cmake_minimum_required(VERSION 3.8)
project(ProcessCommand)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProcessCommand main.cpp Process/Process.cpp Process/Process.h CommandProcess/CommandProc.cpp CommandProcess/CommandProc.h Reciver/Reciver.cpp Reciver/Reciver.h)