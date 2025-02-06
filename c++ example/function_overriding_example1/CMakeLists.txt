cmake_minimum_required(VERSION 3.16)

project(function_overriding_example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(function_overriding_example1 main.cpp
    electronicitem.h electronicitem.cpp
    mobile.h mobile.cpp)

include(GNUInstallDirs)
install(TARGETS function_overriding_example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
