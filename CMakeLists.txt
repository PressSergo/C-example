cmake_minimum_required(VERSION 3.8)
project(CLionProjects)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        BinarySearch/Array.cpp
        BinarySearch/Array.h
        BinarySearch/main.cpp
        Commnad/Command/Comand.h
        Commnad/Process/process.h
        Commnad/Reciver/Reciver.h
        Commnad/main.cpp
        Decorator/Decor/Decor.cpp
        Decorator/Decor/Decor.h
        Decorator/Linker/Linker.cpp
        Decorator/Linker/Linker.h
        Decorator/main.cpp
        factory/Aircraft/Aircraft.h
        factory/Store/Store.h
        factory/main.cpp
        InstMergesorted/Array.cpp
        InstMergesorted/Array.h
        InstMergesorted/main.cpp
        Observe/Observe/Observe.cpp
        Observe/Observe/Observe.h
        Observe/main.cpp
        PersonDecorator/Linker/LInker.cpp
        PersonDecorator/Linker/LInker.h
        PersonDecorator/TypePerson/Person.h
        PersonDecorator/TypePerson/PersonType.h
        PersonDecorator/main.cpp
        ProcessCommand/CommandProcess/CommandProc.cpp
        ProcessCommand/CommandProcess/CommandProc.h
        ProcessCommand/Process/Process.cpp
        ProcessCommand/Process/Process.h
        ProcessCommand/Reciver/Reciver.cpp
        ProcessCommand/Reciver/Reciver.h
        ProcessCommand/main.cpp
        Recursia/main.cpp
        Singleton/main.cpp
        Singleton/Singelton.cpp
        Singleton/Singelton.h
        untitled/Array.cpp
        untitled/Array.h
        untitled/main.cpp
        untitled1/Duck.cpp
        untitled1/Duck.h
        untitled1/FlyBehavior.cpp
        untitled1/FlyBehavior.h
        untitled1/main.cpp
        untitled1/QuackBehavior.cpp
        untitled1/QuackBehavior.h)

add_executable(CLionProjects ${SOURCE_FILES})