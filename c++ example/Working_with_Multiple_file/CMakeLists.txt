cmake_minimum_required(VERSION 3.16)

project(Working_with_Multiple_file LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Working_with_Multiple_file main.cpp)

include(GNUInstallDirs)
install(TARGETS Working_with_Multiple_file
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
