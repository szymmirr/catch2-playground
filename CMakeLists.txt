project(project)
cmake_minimum_required(VERSION 2.8)

enable_testing()

add_library(tests OBJECT test.cpp)

target_link_libraries(tests
  Catch2::Catch
  hello
)

add_library(Catch INTERFACE)

add_executable(tests
  test.cpp
)

add_test(NAME test1 COMMAND tests)
