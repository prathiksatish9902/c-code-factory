cmake_minimum_required(VERSION 3.16)

project(inheritance_example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inheritance_example1 main.cpp
    car.h car.cpp
    benz.h benz.cpp)

include(GNUInstallDirs)
install(TARGETS inheritance_example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
