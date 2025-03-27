cmake_minimum_required(VERSION 3.16)

project(generate_vehical_data LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(generate_vehical_data main.cpp)

include(GNUInstallDirs)
install(TARGETS generate_vehical_data
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
