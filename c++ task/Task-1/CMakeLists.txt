cmake_minimum_required(VERSION 3.16)

project(Task-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task-1 main.cpp
    employee.h employee.cpp
    organization.h organization.cpp)

include(GNUInstallDirs)
install(TARGETS Task-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
