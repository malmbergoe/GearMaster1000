cmake_minimum_required(VERSION 3.10)

# set project name
project(GearMaster VERSION 0.1)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(external/googletest)

