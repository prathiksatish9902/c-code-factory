cmake_minimum_required(VERSION 3.16)

project(Template_example2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Template_example2 main.cpp
    temp_ex.h temp_ex.cpp)

include(GNUInstallDirs)
install(TARGETS Template_example2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
