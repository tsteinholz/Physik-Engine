cmake_minimum_required(VERSION 2.8.7)
project(Physik-Engine2D C)
#TODO:project(Physik-Engine3D C)

# set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(PHYSIK_ENGINE_VERSION_HAUPT 0)
set(PHYSIK_ENGINE_VERSION_MOLL 0)
set(PHYSIK_ENGINE_VERSION_FLICKEN 1)

set(PHYSIK_ENGINE_INCLUDE
    inc/
)

set(PHYSIK_ENGINE_2D_SOURCE
    src/2D/mathe/vektor2D.c
)

#TODO:set(PHYSIK_ENGINE_3D_SOURCE)

include_directories(${PHYSIK_ENGINE_INCLUDE})

add_library(Physik-Engine2D ${PHYSIK_ENGINE_2D_SOURCE})
#TODO:add_library(Physik-Engine3D ${PHYSIK_ENGINE_3D_SOURCE})
configure_file("inc/config.h.in" "${PROJECT_BINARY_DIR}/config.h")
