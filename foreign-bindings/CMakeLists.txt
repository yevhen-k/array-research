cmake_minimum_required(VERSION 3.5.0)
project(improc VERSION 0.1.0)

include_directories(.)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -Wpedantic -Wno-c11-extensions")

# list of library source files
set(libsrc ./array.h ./array.cpp)
# this is the "object library" target: compiles the sources only once
add_library(objlib OBJECT ${libsrc})
# shared libraries need PIC
set_property(TARGET objlib PROPERTY POSITION_INDEPENDENT_CODE 1)
# shared and static libraries built from the same object files
add_library(array_shared SHARED $<TARGET_OBJECTS:objlib>)
add_library(array_static STATIC $<TARGET_OBJECTS:objlib>)

add_executable(example example.c)

target_link_libraries(example array_static)

