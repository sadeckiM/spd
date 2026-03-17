cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(SPD_Lab1)

file(GLOB_RECURSE headers   inc/*.hh)
file(GLOB_RECURSE sources   inc/*.hh)

add_executable(Lab1)

target_sources(Lab1
    PRIVATE
        ${headers},
        ${sources},
)

target_compile_options(Lab1 PUBLIC -std=c++17 -Wall -Wfloat-conversions)
