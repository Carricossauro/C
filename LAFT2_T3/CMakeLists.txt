cmake_minimum_required(VERSION 3.15)
project(LAFT2_T3 C)

set(CMAKE_C_STANDARD 99)

add_executable(LAFT2_T3 main.c)
target_link_libraries(LAFT2_T3 m)