cmake_minimum_required(VERSION 3.2)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER sdcc)
set(CMAKE_CXX_COMPILER g++)

project(sdcc C)

set(SDCC_INCLUDE_DIR E:/SDCC/include)

include_directories(
        ${SDCC_INCLUDE_DIR}
        ${SDCC_INCLUDE_DIR}/mcs51
        fw_lib/include
        hardware
        user
)

file(GLOB_RECURSE SOURCES "fw_lib/src/*.*" "user/*.*" "hardware/*.*")

add_executable(sdcc ${SOURCES})

add_custom_command(TARGET sdcc
        POST_BUILD
        COMMAND packihx $<TARGET_FILE:sdcc> > sdcc.hex
        WORKING_DIRECTORY ./
        VERBATIM
        )