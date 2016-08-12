include_directories(${gtest_SOURCE_DIR}/include/$gtest_SOURCE_DIR)
add_executable(SingletonTest.x SingletonTest.cpp)
target_link_libraries(SingletonTest.x gtest_main Singleton.x)