cmake_minimum_required(VERSION 3.22)
project(NorMakerNativePC VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

set(GM82_CPP_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../app/src/main/cpp")
file(GLOB GM82_CORE_SOURCES CONFIGURE_DEPENDS "${GM82_CPP_ROOT}/src/*.c")
list(APPEND GM82_CORE_SOURCES "${GM82_CPP_ROOT}/gml_vm.c")

set(ZLIB_USE_STATIC_LIBS ON)
find_package(ZLIB REQUIRED)

add_executable(nor_maker_pc WIN32
    main.c
    ${GM82_CORE_SOURCES}
)
target_include_directories(nor_maker_pc PRIVATE
    "${GM82_CPP_ROOT}/include"
    "${GM82_CPP_ROOT}"
)
target_link_libraries(nor_maker_pc PRIVATE
    ZLIB::ZLIB
    comdlg32
    shell32
    gdi32
    user32
)
if(MINGW)
    target_link_libraries(nor_maker_pc PRIVATE m)
endif()
if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(nor_maker_pc PRIVATE -Werror=implicit-function-declaration)
endif()
set_target_properties(nor_maker_pc PROPERTIES OUTPUT_NAME "NorMakerNativePC")

# Nor Maker Studio: the actual Nor Maker application shell on Windows. It serves
# the bundled editor UI (app/src/main/assets/www/index.html) over loopback and
# answers the same window.NorNative bridge the Android WebView injects, so the PC
# build shows the real Nor Maker interface rather than a hand-written Win32 UI.
set(NOR_BRIDGE_JS "${CMAKE_CURRENT_LIST_DIR}/assets/nor_pc_bridge.js")
set(NOR_BRIDGE_HEADER "${CMAKE_CURRENT_BINARY_DIR}/generated/nor_bridge_js.h")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${NOR_BRIDGE_JS}")
file(READ "${NOR_BRIDGE_JS}" NOR_BRIDGE_SRC)
string(REPLACE "\\" "\\\\" NOR_BRIDGE_SRC "${NOR_BRIDGE_SRC}")
string(REPLACE "\"" "\\\"" NOR_BRIDGE_SRC "${NOR_BRIDGE_SRC}")
string(REPLACE "\n" "\\n\"\n\"" NOR_BRIDGE_SRC "${NOR_BRIDGE_SRC}")
file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/generated")
file(WRITE "${NOR_BRIDGE_HEADER}"
     "/* Generated from assets/nor_pc_bridge.js by CMake. Do not edit. */\n"
     "static const char NOR_PC_BRIDGE_JS[] = \"${NOR_BRIDGE_SRC}\";\n")

add_executable(nor_maker_studio
    nor_studio.c
    ${GM82_CORE_SOURCES}
)
target_include_directories(nor_maker_studio PRIVATE
    "${GM82_CPP_ROOT}/include"
    "${GM82_CPP_ROOT}"
    "${CMAKE_CURRENT_BINARY_DIR}/generated"
)
target_link_libraries(nor_maker_studio PRIVATE
    ZLIB::ZLIB
    ws2_32
    winhttp
    shell32
    gdi32
    user32
)
if(MINGW)
    target_link_libraries(nor_maker_studio PRIVATE m)
endif()
if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(nor_maker_studio PRIVATE -Werror=implicit-function-declaration)
endif()
set_target_properties(nor_maker_studio PROPERTIES OUTPUT_NAME "NorMakerStudio")
