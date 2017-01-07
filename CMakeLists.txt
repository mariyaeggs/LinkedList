cmake_minimum_required(VERSION 3.6)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES BeginPosition.cpp)
set(SOURCE_FILES NPosition.cpp)
add_executable(LinkedList ${SOURCE_FILES})