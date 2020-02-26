cmake_minimum_required(VERSION 3.15)
project(PI_F3 C)

set(CMAKE_C_STANDARD 99)

add_executable(PI_F3 main.c)
target_link_libraries(PI_F3 m)