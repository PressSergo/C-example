cmake_minimum_required(VERSION 3.8)
project(PersonDecorator)

set(CMAKE_CXX_STANDARD 11)

add_executable(PersonDecorator main.cpp Linker/LInker.cpp Linker/LInker.h TypePerson/Person.h TypePerson/PersonType.h)