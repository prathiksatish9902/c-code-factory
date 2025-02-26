cmake_minimum_required(VERSION 3.16)

project(unorderd_set_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unorderd_set_task1 main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS unorderd_set_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
