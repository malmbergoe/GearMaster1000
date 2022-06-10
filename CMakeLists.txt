cmake_minimum_required(VERSION 3.10)

# set project name
project(GearMaster VERSION 0.1)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(PACKAGE_TEST "Build unit tests" ON)
if(PACKAGE_TEST)
  enable_testing()
  include(GoogleTest)
  add_subdirectory(test/cpp)
endif()

add_subdirectory(src/cpp)


