cmake_minimum_required(VERSION 3.9)
project(Watcher)

set(CMAKE_CXX_STANDARD 11)

add_executable(Watcher main.cpp  System/System.h State/State.h)