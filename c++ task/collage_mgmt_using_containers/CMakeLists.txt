cmake_minimum_required(VERSION 3.16)

project(collage_mgmt_using_containers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(collage_mgmt_using_containers main.cpp
    collage.h collage.cpp
    department.h department.cpp
    management.h management.cpp
    university.h university.cpp
    commondetails.h commondetails.cpp
    staff.h staff.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS collage_mgmt_using_containers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
