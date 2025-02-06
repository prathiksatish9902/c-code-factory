cmake_minimum_required(VERSION 3.16)

project(operator_overloading_example2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(operator_overloading_example2 main.cpp
    space.h space.cpp)

include(GNUInstallDirs)
install(TARGETS operator_overloading_example2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
