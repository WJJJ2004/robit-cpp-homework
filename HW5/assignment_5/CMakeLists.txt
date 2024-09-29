cmake_minimum_required(VERSION 3.16)

project(assignment_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(assignment_5 main.cpp
    Animal.h
)

include(GNUInstallDirs)
install(TARGETS assignment_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
