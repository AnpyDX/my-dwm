# CMake for suckless dwm (compile_commands.json)
cmake_minimum_required(VERSION 3.2)
project("dwm")

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

aux_source_directory(. DWM_SOURCES)

add_executable("dwm" ${DWM_SOURCES})

target_link_directories(
    "dwm" PUBLIC
    /usr/include/X11
    /usr/include/freetype2
    /usr/include
    )
