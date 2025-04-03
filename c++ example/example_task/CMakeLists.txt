cmake_minimum_required(VERSION 3.16)

project(example_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example_task main.cpp
    prathik.h prathik.cpp
    darshan.h darshan.cpp)

include(GNUInstallDirs)
install(TARGETS example_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
