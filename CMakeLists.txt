cmake_minimum_required(VERSION 3.17)
project(lua-nanovg)

set(CMAKE_CXX_STANDARD 20)



# X-Plane Mac only gives us GL2.1
add_definitions( -DNANOVG_GL2=1 -DNANOVG_GL_IMPLEMENTATION=1 )

set( NVG_ROOT third_party/nanovg-master/src )
set( NVG_SRC
        #${NVG_ROOT}/fontstash.h
        ${NVG_ROOT}/nanovg.c ${NVG_ROOT}/nanovg.h
        ${NVG_ROOT}/nanovg_gl.h
        ${NVG_ROOT}/nanovg_gl_utils.h
        #${NVG_ROOT}/stb_image.h
        #${NVG_ROOT}/stb_truetype.h
        )




set( LNK_LIN third_party/libs/linux )
LINK_DIRECTORIES( ${LNK_LIN} )

link_libraries(
        luajit
        GLEW
)


set(
        SRC
        lua-nanovg.cpp
)

include_directories(
        third_party/LuaJIT-2.1/src
        third_party/nanovg-master/src
        third_party/glew-2.2.0/src
)

add_library(nvg SHARED ${SRC} ${NVG_SRC} )
SET_TARGET_PROPERTIES(nvg PROPERTIES PREFIX  "" )
