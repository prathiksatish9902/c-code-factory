cmake_minimum_required(VERSION 3.16)

project(inheritance_example2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inheritance_example2 main.cpp
    phone.h phone.cpp
    camera.h camera.cpp
    music.h music.cpp
    smartphone.h smartphone.cpp)

include(GNUInstallDirs)
install(TARGETS inheritance_example2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
