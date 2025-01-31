cmake_minimum_required(VERSION 3.16)

project(task-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task-2 main.cpp
    static.h static.cpp)

include(GNUInstallDirs)
install(TARGETS task-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
