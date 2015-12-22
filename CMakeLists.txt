cmake_minimum_required(VERSION 3.3)
project(C_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Dario/unit06/seker.c)

add_executable(C_code ${SOURCE_FILES})