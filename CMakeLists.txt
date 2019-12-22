cmake_minimum_required(VERSION 3.10)

# set project name
project(GearMaster VERSION 1.0)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(src/Version.hpp.in src/Version.hpp)


set(HEADERS
    src/Version.hpp)

set(SOURCES
    src/main.cpp)



# add the executable
add_executable(GearMaster ${SOURCES} ${HEADERS})
target_include_directories(GearMaster PUBLIC "${PROJECT_BINARY_DIR}")
