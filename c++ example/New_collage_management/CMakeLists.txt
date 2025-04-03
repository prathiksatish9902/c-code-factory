cmake_minimum_required(VERSION 3.16)

project(New_collage_management LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(New_collage_management main.cpp
    collage.h collage.cpp
    personaldetails.h personaldetails.cpp
    university.h university.cpp
    management.h management.cpp
    student.h student.cpp
    staff.h staff.cpp)

include(GNUInstallDirs)
install(TARGETS New_collage_management
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
