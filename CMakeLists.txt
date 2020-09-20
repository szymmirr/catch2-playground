project(project)
cmake_minimum_required(VERSION 2.8)

enable_testing()

add_library(test OBJECT test.cpp)

target_link_libraries(test
  Catch2::Catch
  hello
)

add_library(Catch INTERFACE)

add_executable(test
  test.cpp
)

add_test(NAME test1 COMMAND test)
