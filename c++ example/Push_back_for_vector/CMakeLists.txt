cmake_minimum_required(VERSION 3.16)

project(Push_back_for_vector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Push_back_for_vector main.cpp
    mycontainer.h mycontainer.cpp)

include(GNUInstallDirs)
install(TARGETS Push_back_for_vector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
