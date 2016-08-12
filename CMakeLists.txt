cmake_minimum_required(VERSION 3.6)
project(DesignPatterns)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# sources files
set(SOURCE_FILES main.cpp)

# libs directories
include_directories(src)

add_subdirectory(src)
add_subdirectory(Tests)

# Exec
add_executable(DesignPatterns.x ${SOURCE_FILES})

# link lib
target_link_libraries(DesignPatterns.x Singleton.x)
