# NDK CMake for libgm82_android.so
cmake_minimum_required(VERSION 3.18)
project(gm82_android C)

set(GM82_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)
set(GM82_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(GM82_CORE_SOURCES
  gm82_jni.c
  gm82_jni_java_bridge.c
  gm82_gl_textures.c
  ${GM82_SRC_DIR}/gm82_runtime.c
  ${GM82_SRC_DIR}/gm82_events.c
  ${GM82_SRC_DIR}/gm82_gml_builtins.c
  ${GM82_SRC_DIR}/gm82_gml_eval.c
  ${GM82_SRC_DIR}/gm82_input.c
  ${GM82_SRC_DIR}/gm82_view.c
  ${GM82_SRC_DIR}/gm82_actions.c
  ${GM82_SRC_DIR}/gm82_object_room_decode.c
  ${GM82_SRC_DIR}/gm82_sprite_decode.c
  ${GM82_SRC_DIR}/gm82_background_decode.c
  ${GM82_SRC_DIR}/gm82_project_ir.c
  ${GM82_SRC_DIR}/gm82_materialize.c
  ${GM82_SRC_DIR}/gm82_runtime_guard.c
  ${GM82_SRC_DIR}/gm82_loader.c
  ${GM82_SRC_DIR}/gm82_gmk_reader.c
  ${GM82_SRC_DIR}/gm82_gmk_format.c
  ${GM82_SRC_DIR}/gm82_text_reader.c
  ${GM82_SRC_DIR}/gm82_game_start.c
  ${GM82_SRC_DIR}/gm82_path.c
  ${GM82_SRC_DIR}/gm82_timeline.c
  ${GM82_SRC_DIR}/gm82_particles.c
  ${GM82_SRC_DIR}/gm82_script.c
  ${GM82_SRC_DIR}/gm82_mp_grid.c
)

add_library(gm82_android SHARED ${GM82_CORE_SOURCES})

target_include_directories(gm82_android PRIVATE
  ${GM82_INC_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(gm82_android PRIVATE GM82_HAVE_JNI)
target_compile_options(gm82_android PRIVATE -O2 -fPIC -Wall -Wno-unused-parameter)

if(ANDROID)
  find_library(log-lib log)
  find_library(z-lib z)
  find_library(gles-lib GLESv2)
  find_library(egl-lib EGL)
  find_library(android-lib android)
  target_link_libraries(gm82_android ${log-lib} ${z-lib} ${gles-lib} ${egl-lib} ${android-lib})
else()
  find_package(ZLIB REQUIRED)
  target_link_libraries(gm82_android ZLIB::ZLIB m)
  target_compile_definitions(gm82_android PRIVATE GM82_HOST_BUILD=1)
endif()
