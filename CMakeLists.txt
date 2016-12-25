cmake_minimum_required(VERSION 3.5)
project(Raytracer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

include_directories(includes)

##########Core##########
file(GLOB coresrc sources/Core/*.cpp)
file(GLOB coreinc includes/Core/*.hpp)

##########Effect##########
file(GLOB effectsrc sources/Effect/*.cpp)
file(GLOB effectinc includes/Effect/*.hpp)

##########Graphic##########
file(GLOB graphicsrc sources/Graphic/*.cpp)
file(GLOB graphicinc includes/Graphic/*.hpp)

##########Object##########
file(GLOB objectsrc sources/Object/*.cpp)
file(GLOB objectinc includes/Object/*.hpp)

##########SDL2##########
file(GLOB sdl2src sources/SDL2/*.cpp)
file(GLOB sdl2inc includes/SDL2/*.hpp)

add_executable(Raytracer
        ${coresrc} ${coreinc}
        ${effectsrc} ${effectinc}
        ${graphicsrc} ${graphicinc}
        ${objectsrc} ${objectinc}
        ${sdl2src} ${sdl2inc}
        sources/main.cpp)

add_executable(test_unit_vec ${coresrc} ${coreinc} test/test_unit_vector.cpp)

target_link_libraries(Raytracer SDL2)