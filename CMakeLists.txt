cmake_minimum_required(VERSION 3.10)
project(sdv-self-update-agent)

set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_DEBUG_MODE 1)

set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_SKIP_BUILD_RPATH TRUE)
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH ../lib)

option(SUA_BUILD_TESTS "Build unit tests with code-coverage report enabled" OFF)

include(cmake/dependencies.cmake)

add_subdirectory(3rdparty)
add_subdirectory(src)

if(SUA_BUILD_TESTS)
    add_subdirectory(utest)
endif()

unset(SUA_BUILD_TESTS CACHE)
