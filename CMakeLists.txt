cmake_minimum_required(VERSION 2.8.7)
project(Physik-Engine C)

# set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(PHYSIK_ENGINE_VERSION_HAUPT 0)
set(PHYSIK_ENGINE_VERSION_MOLL 0)
set(PHYSIK_ENGINE_VERSION_FLICKEN 1)

set(PHYSIK_ENGINE_INCLUDE
    inc/
)

set(PHYSIK_ENIGINE_SOURCE
    src/häufig/vektor2D.c
)

include_directories(${PHYSIK_ENGINE_INCLUDE})

add_library(Physik-Engine ${PHYSIK_ENIGINE_SOURCE})
#add_library(Physik-Engine src/2D/häufig/vektor2D.c)
configure_file("inc/config.h.in" "${PROJECT_BINARY_DIR}/config.h")
