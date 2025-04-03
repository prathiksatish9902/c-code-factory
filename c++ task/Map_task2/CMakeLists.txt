cmake_minimum_required(VERSION 3.16)

project(Map_task2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Map_task2 main.cpp
    capital.h capital.cpp)

include(GNUInstallDirs)
install(TARGETS Map_task2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
