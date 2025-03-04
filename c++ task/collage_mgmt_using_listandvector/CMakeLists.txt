cmake_minimum_required(VERSION 3.16)

project(collage_mgmt_using_listandvector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(collage_mgmt_using_listandvector main.cpp
    details.h details.cpp
    collage.h collage.cpp
    management.h management.cpp
    staff.h staff.cpp
    student.h student.cpp
    department.h department.cpp)

include(GNUInstallDirs)
install(TARGETS collage_mgmt_using_listandvector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
