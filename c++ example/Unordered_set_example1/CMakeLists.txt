cmake_minimum_required(VERSION 3.16)

project(Unordered_set_example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Unordered_set_example1 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Unordered_set_example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
