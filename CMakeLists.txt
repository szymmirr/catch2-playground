project(project)
cmake_minimum_required(VERSION 2.8)

enable_testing()

add_library(tests OBJECT test.cpp)

target_link_libraries(Catch2::Catch2)

add_executable(test test.cpp)
add_test(NAME test1 COMMAND test)
