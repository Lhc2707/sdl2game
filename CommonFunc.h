 #ifndef COMMON_FUNCTION_H_
 #define COMMON_FUNCTION_H_

#include <bits/stdc++.h>
#include <windows.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

static SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;
static SDL_Event g_event;
 
//thông số màn hình
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEITH = 640;
const int SCREEN_BPP = 32;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int RENDER_DR = 0xff;

 #endif