cmake_minimum_required(VERSION 3.16)

project(example8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(example8 main.cpp
    student.h student.cpp
    collage.h collage.cpp)

include(GNUInstallDirs)
install(TARGETS example8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
