cmake_minimum_required(VERSION 3.5)

project(nitrobanner)

set(CMAKE_CXX_STANDARD 17)

if (MSVC)
    set(CMAKE_CXX_FLAGS_RELEASE "/O2")
else()
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
endif()

set(SOURCES
    banner.cpp
    crc16.cpp
    main.cpp
)

add_executable(nitrobanner ${SOURCES})
if (MSVC)
    target_compile_options(nitrobanner PRIVATE
        /D_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
        /W4
    )
else()
    target_compile_options(nitrobanner PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
    )
endif()
