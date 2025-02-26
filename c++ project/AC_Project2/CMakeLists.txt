cmake_minimum_required(VERSION 3.16)

project(AC_Project2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AC_Project2 main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    wire.h wire.cpp
    polycabwire.h polycabwire.cpp
    finolexwire.h finolexwire.cpp
    havellswire.h havellswire.cpp)

include(GNUInstallDirs)
install(TARGETS AC_Project2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
