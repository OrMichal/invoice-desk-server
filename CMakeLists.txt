cmake_minimum_required(VERSION 3.5)
project(drogon_server)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Drogon REQUIRED)

file(GLOB_RECURSE SRC_FILES
        src/main.cpp
        src/controllers/*/*.cpp
        src/models/*/*.cpp
        src/env/*.cpp
)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} Drogon::Drogon)
