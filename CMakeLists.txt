cmake_minimum_required(VERSION 3.17)
project(lab_c_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab_c_
        main.cpp
        zlab02.cpp
        zlab02.h
        zlab03.cpp
        zlab03.h "Organizm/organizm.cpp" "Organizm/organizm.h" "Organizm/main.cpp" "Organizm/ustawienia.h" "Organizm/generatorlosowy.h" "Organizm/generatorlosowy.cpp" "Organizm/sasiedztwo.h" "Organizm/sasiedztwo.cpp" "zlab06.cpp" "zlab06.h" "Mieszkaniec.cpp"  "Organizm/osobniki.cpp" "Organizm/nisza.h")
