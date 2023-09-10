cmake_minimum_required(VERSION 3.26)
project(libft C)

file(GLOB SRC src/*.c)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)
add_library(libft SHARED ${SRC})

set(CMAKE_STATIC_LIBRARY_PREFIX "")