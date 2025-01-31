cmake_minimum_required(VERSION 3.16)

project(program2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(program2 main.cpp
    prathik.h prathik.cpp)

include(GNUInstallDirs)
install(TARGETS program2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
