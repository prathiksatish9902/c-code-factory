cmake_minimum_required(VERSION 3.16)

project(vehical_management-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vehical_management-2 main.cpp
    rentalvehicaldetails.h rentalvehicaldetails.cpp
    rentalbikedetails.h rentalbikedetails.cpp
    rentalcardetails.h rentalcardetails.cpp
    vehicalbookingreport.h vehicalbookingreport.cpp
    fileoperation.h fileoperation.cpp
    rentalvehicalmanger.h rentalvehicalmanger.cpp
    paymentmethod.h paymentmethod.cpp
    cashpayment.h cashpayment.cpp
    onlinepayment.h onlinepayment.cpp
    admin.h admin.cpp
    user.h user.cpp
    adminmanager.h adminmanager.cpp
usermanager.h usermanager.cpp)

include(GNUInstallDirs)
install(TARGETS vehical_management-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
