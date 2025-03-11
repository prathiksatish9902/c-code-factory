cmake_minimum_required(VERSION 3.16)

project(wifi_data_using_filehandling LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wifi_data_using_filehandling main.cpp
    readdatafromfile.h readdatafromfile.cpp
    wifi.h wifi.cpp)

include(GNUInstallDirs)
install(TARGETS wifi_data_using_filehandling
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
