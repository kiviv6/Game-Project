#include <string.h>
#include "init.h" 
#include "structs.h" 
#include "draw.h" 
#include "input.h" 

int main(int argc, char* argv[]) {
  memset(&winren, 0, sizeof(WinRen));
  initSDL();
  while (1) {
    prepareScene();
    doInput();
    presentScene();
    SDL_Delay(16);
  }
  return 0;
}
