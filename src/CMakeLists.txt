set(BINARY ${CMAKE_PROJECT_NAME})

#configure_file(${PROJECT_SOURCE_DIR}/src/Version.h.in ${PROJECT_BINARY_DIR}/src/Version.h)

set(HEADERS
    ${PROJECT_SOURCE_DIR}/src/GearMasterMain.h
    ${PROJECT_SOURCE_DIR}/src/Inventory.h
    ${PROJECT_SOURCE_DIR}/src/Item.h
#    ${PROJECT_BINARY_DIR}/src/Version.h
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

set(SOURCES ${SOURCES})
set(HEADERS ${HEADERS})

add_executable(${BINARY}_run ${SOURCES} ${HEADERS})
set_target_properties(${BINARY}_run PROPERTIES LINKER_LANGUAGE CXX)

add_library(${BINARY}_lib STATIC ${SOURCES} ${HEADERS})
set_target_properties(${BINARY}_lib PROPERTIES LINKER_LANGUAGE CXX)
