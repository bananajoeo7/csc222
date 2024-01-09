#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(int argc, char** argv)
{
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(640*2, 480*1.5, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, 2, 2);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect;
    rect.w = 100;
    rect.h = 100;
    rect.y = 0;
    rect.x = 0;

    SDL_Rect rect2;
    rect2.w = 100;
    rect2.h = 100;
    rect2.y = 50;
    rect2.x = 50;

    SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderDrawRect(renderer, &rect2);
    SDL_RenderFillRect(renderer, &rect2);

    SDL_Rect intersection;

    SDL_IntersectRect(&rect, &rect2, &intersection);

    SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderDrawRect(renderer, &rect2);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &intersection);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, 640/2, 480/2);

    SDL_RenderPresent(renderer);
    SDL_Delay(10000);

    return 0;
}