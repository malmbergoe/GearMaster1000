set(BINARY ${CMAKE_PROJECT_NAME})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

configure_file("${PROJECT_SOURCE_DIR}/src/Version.h.in"
               "${PROJECT_BINARY_DIR}/src/Version.h")

include_directories("${PROJECT_SOURCE_DIR}/include/GearMaster")
include_directories("${PROJECT_BINARY_DIR}/src")

set(HEADERS
    ${PROJECT_SOURCE_DIR}/include/GearMaster/GearMasterMain.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/Inventory.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/Item.h
    ${PROJECT_BINARY_DIR}/src/Version.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/userinterface/EditOption.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/userinterface/MainMenu.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/userinterface/Menu.h
    ${PROJECT_SOURCE_DIR}/include/GearMaster/userinterface/UserOption.h
)

set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/GearMasterMain.cpp
    ${PROJECT_SOURCE_DIR}/src/Inventory.cpp
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/userinterface/MainMenu.cpp
)

set(SOURCES ${SOURCES})
set(HEADERS ${HEADERS})

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


add_executable(helloGui ${GUI_SOURCES} ${GUI_HEADERS})
target_link_libraries(helloGui Qt5::Widgets)

add_executable(${BINARY}_run ${SOURCES} ${HEADERS})
set_target_properties(${BINARY}_run PROPERTIES LINKER_LANGUAGE CXX)

add_library(${BINARY}_lib STATIC ${SOURCES} ${HEADERS})
set_target_properties(${BINARY}_lib PROPERTIES LINKER_LANGUAGE CXX)
