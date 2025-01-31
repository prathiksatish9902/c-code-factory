cmake_minimum_required(VERSION 3.16)

project(example6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example6 main.cpp
    prathik.h prathik.cpp)

include(GNUInstallDirs)
install(TARGETS example6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
