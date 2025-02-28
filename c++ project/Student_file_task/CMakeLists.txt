cmake_minimum_required(VERSION 3.16)

project(Student_file_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Student_file_task main.cpp
    student.h student.cpp
    readxml.h readxml.cpp
    readcsv.h readcsv.cpp
    readjson.h readjson.cpp
    fileoperation.h fileoperation.cpp
    studentmanager.h studentmanager.cpp
    ui.h ui.cpp)

include(GNUInstallDirs)
install(TARGETS Student_file_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
