cmake_minimum_required(VERSION 3.16)

project(unordered_set_task2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unordered_set_task2 main.cpp)

include(GNUInstallDirs)
install(TARGETS unordered_set_task2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
