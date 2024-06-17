#include "init.h"

void initSDL(void) {
  int rendererFlags, windowFlags;

  rendererFlags = SDL_RENDERER_ACCELERATED;

  windowFlags = 0;

  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    printf("Couldn't initialize SDL: %s\n", SDL_GetError());
    exit(1);
  }

  winren.window = SDL_CreateWindow("Kevin's Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, windowFlags);

  if (!winren.window) {
    printf("Failed to open %d x %d window: %s\n", WINDOW_WIDTH, WINDOW_HEIGHT, SDL_GetError());
    exit(1);
  }

  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

  winren.renderer = SDL_CreateRenderer(winren.window, -1, rendererFlags);

  if (!winren.renderer) {
    printf("Failed to create renderer: %s\n", SDL_GetError());
    exit(1);
  }
}
