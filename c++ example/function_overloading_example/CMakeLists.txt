cmake_minimum_required(VERSION 3.16)

project(function_overloading_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(function_overloading_example main.cpp)

include(GNUInstallDirs)
install(TARGETS function_overloading_example
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
