cmake_minimum_required(VERSION 3.3)
project(C_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES C-HardWay/HardWay-ex8.c)
#set(SOURCE_FILES C-HardWay/HardWay-ex3.c)
#set(SOURCE_FILES brainstorm.c)
#set(SOURCE_FILES Dario/Dario-challenges/dario-classwork-strings.c)
#set(SOURCE_FILES Dario/DarioB4test/debug_me01.c)
#set(SOURCE_FILES Lior-homework/homework-5/arrays1.c)
set(SOURCE_FILES preparation4test/bohan_solution1.c)

add_executable(C_code ${SOURCE_FILES})