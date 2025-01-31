cmake_minimum_required(VERSION 3.16)

project(example9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example9 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS example9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
