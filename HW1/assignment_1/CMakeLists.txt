cmake_minimum_required(VERSION 3.16)

project(assignment_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(assignment_1 main.cpp
    BoolStack.h
    BoolQueue.h)

include(GNUInstallDirs)
install(TARGETS assignment_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
