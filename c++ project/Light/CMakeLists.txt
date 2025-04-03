cmake_minimum_required(VERSION 3.16)

project(Light LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Light main.cpp
    light.h light.cpp
    switch.h switch.cpp
    wire.h wire.cpp)

include(GNUInstallDirs)
install(TARGETS Light
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
