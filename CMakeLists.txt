cmake_minimum_required(VERSION 2.8)

project(DnDGame)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build/exe)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build/lib)

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

add_library(diceLib
    ${PROJECT_SOURCE_DIR}/src/Dice.cpp
)

add_executable(DnDGame ${PROJECT_SOURCE_DIR}/main.cpp)

target_link_libraries(DnDGame diceLib)