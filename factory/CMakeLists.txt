cmake_minimum_required(VERSION 3.8)
project(factory)

set(CMAKE_CXX_STANDARD 11)

add_executable(factory main.cpp Aircraft/Aircraft.h Store/Store.h)