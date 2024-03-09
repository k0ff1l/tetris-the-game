// Copyright 2024 <fleurs>

#include "tetris.hpp"

#include <SDL2/SDL.h>

int main() {
  if (SDL_Init(SDL_INIT_VIDEO)!= 0) {
    std::cerr << "SDL_Init(SDL_INIT_VIDEO)\n";
    return -1;
  }
}