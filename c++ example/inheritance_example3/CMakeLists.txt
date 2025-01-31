cmake_minimum_required(VERSION 3.16)

project(inheritance_example3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inheritance_example3 main.cpp
    person.h person.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS inheritance_example3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
