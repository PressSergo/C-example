cmake_minimum_required(VERSION 3.8)
project(Decorator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Decorator main.cpp Linker/Linker.cpp Linker/Linker.h Decor/Decor.cpp Decor/Decor.h)