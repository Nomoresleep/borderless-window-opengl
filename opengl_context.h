#pragma once

HGLRC opengl_create_context(HDC hdc, int version_major, int version_minor);
bool opengl_set_pixelformat(HDC hdc); // Call this on other windows that you want to use the created context on
void opengl_destroy_context(HGLRC hglrc);
