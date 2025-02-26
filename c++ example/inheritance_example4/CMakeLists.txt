cmake_minimum_required(VERSION 3.16)

project(inheritance_example4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inheritance_example4 main.cpp
    laptop.h laptop.cpp
    studentlaptop.h studentlaptop.cpp
    businesslaptop.h businesslaptop.cpp)

include(GNUInstallDirs)
install(TARGETS inheritance_example4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
