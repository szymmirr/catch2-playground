project(project)
cmake_minimum_required(VERSION 2.8)

enable_testing()

add_library(hello
  hello.h
  hello.cpp
)

add_library(tests OBJECT tests.cpp)

add_library(Catch INTERFACE)

add_executable(unit_tests
  tests.cpp
)

target_link_libraries(unit_tests
  Catch
  hello
)

add_test(NAME test1 COMMAND tests)
