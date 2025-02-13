cmake_minimum_required(VERSION 3.16)

project(copy_constructor_example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(copy_constructor_example1 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS copy_constructor_example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
