cmake_minimum_required(VERSION 2.8)

project(lpc)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

add_definitions(-O2 -Wall -DMACHINE)

file(GLOB_RECURSE SRC_FILES *.c)

add_library(lpc ${SRC_FILES})


