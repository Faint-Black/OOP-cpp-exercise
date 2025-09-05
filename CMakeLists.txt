cmake_minimum_required(VERSION 3.10)
project(example VERSION 1.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(example.out ${SOURCES})
target_compile_options(example.out PRIVATE -Wall -Wextra -Werror)
