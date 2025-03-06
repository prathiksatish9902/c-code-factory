cmake_minimum_required(VERSION 3.16)

project(Collage_management2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Collage_management2 main.cpp
    collage.h collage.cpp
    management.h management.cpp
    person.h person.cpp
    staff.h staff.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Collage_management2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
