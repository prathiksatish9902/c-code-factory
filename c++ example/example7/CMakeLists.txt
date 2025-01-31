cmake_minimum_required(VERSION 3.16)

project(example7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example7 main.cpp
    p1.h p1.cpp
    p2.h p2.cpp)

include(GNUInstallDirs)
install(TARGETS example7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
