project(DesignPatternsTests)

add_subdirectory(lib/googletest)

include_directories(${gtest_SOURCE_DIR}/include/$gtest_SOURCE_DIR)

# SingletonTest
add_executable(SingletonTest.x src/SingletonTest.cpp)
target_link_libraries(SingletonTest.x gtest_main Singleton.x)