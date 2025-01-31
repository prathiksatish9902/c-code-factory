cmake_minimum_required(VERSION 3.16)

project(example2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example2 main.cpp
    laptop.h laptop.cpp)

include(GNUInstallDirs)
install(TARGETS example2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
