#
#  PixelGame
#  CMakeLists.txt
#
#  Created on: 2014/12/01
#      Author: Hans Robeers (https://github.com/hrobeers)
#

project(PixelGame)

set(SRC
    NeopixelPixelRenderer.cpp
    NeuroPixelRenderer.cpp
    SDLPixelRenderer.cpp
)

set(HDR
    NeopixelPixelRenderer.h
    NeuroPixelRenderer.h
    PixelGameInclude.h
    PixelRenderer.h
    SDLPixelRenderer.h
    SoundPlayer.h
)

add_library(PixelGame ${SRC} ${HDR})

INCLUDE_DIRECTORIES("${CMAKE_CURRENT_SOURCE_DIR}/../Adafruit_NeoMatrix")
INCLUDE_DIRECTORIES("${CMAKE_CURRENT_SOURCE_DIR}/../Adafruit_NeoPixel")
INCLUDE_DIRECTORIES("${CMAKE_CURRENT_SOURCE_DIR}/../Adafruit_GFX")

if (EMSCRIPTEN)
    target_link_libraries(PixelGame "${EMSCRIPTEN_SDL2_DIR}/build/.libs/libSDL2.a")
else()
    INCLUDE(FindPkgConfig)
    PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
    INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS}) # ${SDL2IMAGE_INCLUDE_DIRS})
    target_link_libraries(PixelGame
        ${SDL2_LIBRARIES}
    )
endif()
