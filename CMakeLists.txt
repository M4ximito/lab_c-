cmake_minimum_required(VERSION 3.17)
project(lab_c_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab_c_
        main.cpp
        zlab02.cpp
        zlab02.h
        zlab03.cpp
        zlab03.h "Organizm/organizm.cpp" "Organizm/organizm.h" "Organizm/main.cpp")
