cmake_minimum_required(VERSION 3.16)

project(tryexample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tryexample main.cpp
    a.h a.cpp
    b.h b.cpp
    c.h c.cpp)

include(GNUInstallDirs)
install(TARGETS tryexample
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
