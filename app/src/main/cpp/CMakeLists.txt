cmake_minimum_required(VERSION 3.22.1)

project("gm82_android")

add_definitions(-DGM82_HAVE_JNI)

include_directories(
    include
    .
)

file(GLOB GM82_SOURCES CONFIGURE_DEPENDS
    src/*.c
    gm82_jni.c
    gml_vm.c
)

add_library(
    gm82_android
    SHARED
    ${GM82_SOURCES}
)

# batch4: intercept try_stub for 0-arg host impls; multi-arg needs eval dispatch
target_link_options(gm82_android PRIVATE "LINKER:--wrap=gm82_gm82core_try_stub")

find_library(log-lib log)
find_library(jnigraphics-lib jnigraphics)
find_library(z-lib z)
find_library(gles2-lib GLESv2)
find_library(egl-lib EGL)
find_library(sles-lib OpenSLES)

target_link_libraries(
    gm82_android
    ${log-lib}
    ${jnigraphics-lib}
    ${z-lib}
    ${gles2-lib}
    ${egl-lib}
    ${sles-lib}
    m
)
