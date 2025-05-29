cmake_minimum_required(VERSION 3.10)
project(data_structures C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structures main.c
        stack/stack.c
        linked_list/linked_list.h
        linked_list/linked_list.c)
include_directories(stack)