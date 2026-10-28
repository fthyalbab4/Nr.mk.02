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
