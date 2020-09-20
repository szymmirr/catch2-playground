project(project)
cmake_minimum_required(VERSION 2.8)

include(CTest)
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

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(unit_tests)
