cmake_minimum_required(VERSION 3.1)

project(nitrobanner)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(SOURCES
    banner.cpp
    crc16.cpp
    main.cpp
)

add_executable(nitrobanner ${SOURCES})
target_compile_options(nitrobanner PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
)
