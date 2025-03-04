cmake_minimum_required(VERSION 3.16)

project(list_and_vector_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(list_and_vector_task1 main.cpp
    staff.h staff.cpp
    student.h student.cpp
    collage.h collage.cpp
    personaldetails.h personaldetails.cpp)

include(GNUInstallDirs)
install(TARGETS list_and_vector_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
