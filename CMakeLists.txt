cmake_minimum_required(VERSION 3.23)
project(Movie_Maestro)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Movie_Maestro
        main.cpp
        mergesort.h
        movies.h
        parse.h
        quicksort.h)