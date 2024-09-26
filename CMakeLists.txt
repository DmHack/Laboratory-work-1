cmake_minimum_required(VERSION 3.28)
project(laboratoryWork C)

set(CMAKE_C_STANDARD 11)

add_library(laboratoryWork STATIC library.c
        main.c
        main.c)
