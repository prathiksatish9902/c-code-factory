cmake_minimum_required(VERSION 3.16)

project(Friend_example1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Friend_example1 main.cpp
    vehicle.h vehicle.cpp
    car.h car.cpp
    bmw.h bmw.cpp)

include(GNUInstallDirs)
install(TARGETS Friend_example1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
