#include "draw.h"

void prepareScene(void) {
  SDL_SetRenderDrawColor(winren.renderer, 96, 128, 225, 225);
  SDL_RenderClear(winren.renderer);
}

void presentScene(void) {
  SDL_RenderPresent(winren.renderer);
}
