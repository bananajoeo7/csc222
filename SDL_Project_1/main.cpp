#include <iostream>
#include <SDL2/include/SDL.h>
#include <cmath>
using namespace std;

const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;
const int CELL_SIZE = 200;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;