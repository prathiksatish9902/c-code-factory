cmake_minimum_required(VERSION 3.16)

project(Car_task2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Car_task2 main.cpp
    accelarator.h accelarator.cpp
    brake.h brake.cpp
    car.h car.cpp
    engine.h engine.cpp
    wheel.h wheel.cpp)

include(GNUInstallDirs)
install(TARGETS Car_task2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
