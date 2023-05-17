cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled src/main.cpp Header/FlowEdge.hpp src/FlowEdge.cpp Header/FlowNetwork.hpp src/FlowNetwork.cpp Header/Ford_Fulkerson.hpp src/Ford_Fulkerson.cpp)
