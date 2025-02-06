cmake_minimum_required(VERSION 3.16)

project(operator_overloading_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(operator_overloading_task1 main.cpp
    number.h number.cpp)

include(GNUInstallDirs)
install(TARGETS operator_overloading_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
