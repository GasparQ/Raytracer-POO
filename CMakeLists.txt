cmake_minimum_required(VERSION 3.5)
project(Raytracer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SDL2)

FILE(GLOB srcs sources/*.cpp)
FILE(GLOB incs includes/*.hpp)

set(SOURCE_FILES ${srcs} ${incs})
include_directories(includes)
link_libraries(SDL2)

add_executable(Raytracer ${SOURCE_FILES})