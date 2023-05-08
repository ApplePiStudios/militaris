cmake_minimum_required (VERSION 3.8)

option(BUILD_SHARED_LIBS OFF)

project("militiaris")
add_subdirectory("core")
add_subdirectory("ext/SDL")
#add_subdirectory("ext/SDL_image")
#add_subdirectory("ext/SDL_ttf")
add_subdirectory("example")