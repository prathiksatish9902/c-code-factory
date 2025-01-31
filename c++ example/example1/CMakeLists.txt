cmake_minimum_required(VERSION 3.16)

project(example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example1 main.cpp
    demo.h demo.cpp
)

include(GNUInstallDirs)
install(TARGETS example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
