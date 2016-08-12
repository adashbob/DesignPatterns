cmake_minimum_required(VERSION 3.5)
project(DesignPatterns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(DesignPatterns.x ${SOURCE_FILES})

include_directories(src)
add_subdirectory(src)
add_subdirectory(Tests)

target_link_libraries(DesignPatterns.x Singleton.x)