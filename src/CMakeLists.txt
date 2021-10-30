set(BINARY ${CMAKE_PROJECT_NAME})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

configure_file("${PROJECT_SOURCE_DIR}/src/Version.h.in"
               "${PROJECT_BINARY_DIR}/src/Version.h")

include_directories("${PROJECT_SOURCE_DIR}/include/GearMaster")
include_directories("${PROJECT_BINARY_DIR}/src")

set(GUI_SOURCES
    ${PROJECT_SOURCE_DIR}/src/hello.cpp
    ${PROJECT_SOURCE_DIR}/src/gui/MainWindow.cpp
    ${PROJECT_SOURCE_DIR}/src/gui/ItemNavigator.cpp
    ${PROJECT_SOURCE_DIR}/src/gui/ItemView.cpp
)
    
set(GUI_HEADERS
    ${PROJECT_SOURCE_DIR}/include/GearMaster/gui/MainWindow.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/gui/ItemNavigator.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/gui/ItemView.h
)

add_executable(${BINARY}_run ${GUI_SOURCES} ${GUI_HEADERS})
set_target_properties(${BINARY}_run PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(${BINARY}_run Qt5::Widgets)

add_library(${BINARY}_lib STATIC ${SOURCES} ${HEADERS})
set_target_properties(${BINARY}_lib PROPERTIES LINKER_LANGUAGE CXX)
