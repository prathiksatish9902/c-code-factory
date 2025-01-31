cmake_minimum_required(VERSION 3.16)

project(example4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example4 main.cpp
    add.h add.cpp)

include(GNUInstallDirs)
install(TARGETS example4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
