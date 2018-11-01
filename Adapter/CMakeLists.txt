cmake_minimum_required(VERSION 3.9)
project(Adapter)

set(CMAKE_CXX_STANDARD 11)

add_executable(Adapter main.cpp BehaviorDuck/Behavior.h BehaviorDuck/RBehavior.h Duck/DUck.h Duck/ConcreteDuck.h AdapterToy/AdapterToy.h AdapterToy/Toy.h)