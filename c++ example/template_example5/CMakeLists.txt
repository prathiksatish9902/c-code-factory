cmake_minimum_required(VERSION 3.16)

project(template_example5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(template_example5 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS template_example5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
