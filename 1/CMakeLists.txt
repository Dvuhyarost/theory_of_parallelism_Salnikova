cmake_minimum_required(VERSION 3.15)
project(sine_sum LANGUAGES CXX)

option(USE_DOUBLE "Use double instead of float" ON)
if(USE_DOUBLE)
    add_compile_definitions(USE_DOUBLE)
endif()

add_executable(sine_sum main.cpp)