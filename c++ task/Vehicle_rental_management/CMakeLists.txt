cmake_minimum_required(VERSION 3.16)

project(Vehicle_rental_management LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_rental_management main.cpp
    vehicle.h vehicle.cpp
    bike.h bike.cpp
    car.h car.cpp
    vehiclemanagement.h vehiclemanagement.cpp
    bookingreport.h bookingreport.cpp
    fileoperation.h fileoperation.cpp)

include(GNUInstallDirs)
install(TARGETS Vehicle_rental_management
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
