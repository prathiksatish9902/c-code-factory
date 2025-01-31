cmake_minimum_required(VERSION 3.16)

project(inheritance_Task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inheritance_Task1 main.cpp


    bike.h bike.cpp
    vehicle.h vehicle.cpp
    car.h car.cpp
    hybridvehicle.h hybridvehicle.cpp)

include(GNUInstallDirs)
install(TARGETS inheritance_Task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
