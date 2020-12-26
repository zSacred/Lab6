cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)

ADD_DEFINITIONS(
    -std=c++11
)

# enum your files
add_executable(executable
    stdafx.cpp
    lab06.cpp
    task1.cpp
    task2.cpp
    task3.cpp
    task4.cpp
    task5.cpp
    task6.cpp
    task7.cpp
    task8.cpp
    task9.cpp

)

target_link_libraries(executable)