cmake_minimum_required(VERSION 3.16)

project(Diamond_problem_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Diamond_problem_example main.cpp
    engine.h engine.cpp
    petrolengine.h petrolengine.cpp
    cngengine.h cngengine.cpp
    hybrid.h hybrid.cpp)

include(GNUInstallDirs)
install(TARGETS Diamond_problem_example
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
