cmake_minimum_required(VERSION 3.16)

project(collage_Management LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(collage_Management main.cpp
    person.h person.cpp
    student.h student.cpp
    staff.h staff.cpp
    management.h management.cpp
    collage.h collage.cpp)

include(GNUInstallDirs)
install(TARGETS collage_Management
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
