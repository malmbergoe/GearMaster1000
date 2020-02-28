cmake_minimum_required(VERSION 3.10)

# set project name
project(GearMaster VERSION 1.0)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(src/Version.h.in src/Version.h)

set(HEADERS
    ${PROJECT_SOURCE_DIR}/src/GearMasterMain.h
    ${PROJECT_SOURCE_DIR}/src/Inventory.h
    ${PROJECT_SOURCE_DIR}/src/Item.h
    ${PROJECT_SOURCE_DIR}/src/Version.h
    ${PROJECT_SOURCE_DIR}/src/userinterface/EditOption.h
    ${PROJECT_SOURCE_DIR}/src/userinterface/MainMenu.h
    ${PROJECT_SOURCE_DIR}/src/userinterface/Menu.h
    ${PROJECT_SOURCE_DIR}/src/userinterface/UserOption.h
)

set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/GearMasterMain.cpp
    ${PROJECT_SOURCE_DIR}/src/Inventory.cpp
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/userinterface/MainMenu.cpp
)

# add the executable
add_executable(GearMaster ${SOURCES} ${HEADERS})
target_include_directories(GearMaster PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(GearMaster PUBLIC "${PROJECT_SOURCE_DIR}/src")

