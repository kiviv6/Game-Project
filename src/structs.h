#ifndef STRUCTS_H_
#define STRUCTS_H_
#include <SDL2/SDL.h>

typedef struct {
  SDL_Window* window;
  SDL_Renderer* renderer;
} WinRen;

WinRen winren;
#endif
