cmake_minimum_required(VERSION 3.23)
project(c_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        trees.cpp
        conditionals/assigned-if.cpp
        conditionals/if-1.cpp
        conditionals/if-else.cpp
        conditionals/if-else_if-else.cpp
        conditionals/if.cpp
        conditionals/lower-upper-case.cpp
        conditionals/nested-if-1.cpp
        conditionals/nested-if-2.cpp
        conditionals/simple-conditional.cpp
        loops/1-to-n.cpp
        Operators/Basic-Arithmatic1.cpp
        Operators/Basic-Arithmatic2.cpp
        Operators/Basic-Arithmatic3.cpp
        Operators/logical-and.cpp
        Operators/logical-not.cpp
        Operators/logical-or.cpp
        Operators/relational.cpp
        implict-typecasting.cpp
        normal1.cpp
        simple.cpp
        size-of-datatype.cpp)
