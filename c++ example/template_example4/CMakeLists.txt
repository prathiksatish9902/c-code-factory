cmake_minimum_required(VERSION 3.16)

project(template_example4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(template_example4 main.cpp
    sum.h sum.cpp)

include(GNUInstallDirs)
install(TARGETS template_example4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
