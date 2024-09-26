//
// Created by br on 25/9/24.
//

#ifndef LUA_NANOVG_GL_H
#define LUA_NANOVG_GL_H



// This file provides a simple way to include basic GL headers.


#include <GL/glew.h>

//OpenGL
#if APL
//framework path differs
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
//#include <OpenGL\glaux.h>

#else
#include <GL/gl.h>
#include <GL/glu.h>
//#include <gl/glaux.h>

#endif //platform check


#endif //LUA_NANOVG_GL_H
