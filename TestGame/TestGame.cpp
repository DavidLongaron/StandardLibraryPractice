// TestGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SDL3/SDL.h"
#include "SDL3/SDL_main.h"
#include <string>

int main(int argc, char* args[])
{
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;


     /* Global Variables */
    //The window we'll be rendering to
     SDL_Window* gWindow{ nullptr };

     //The surface contained by the window
     SDL_Surface* gScreenSurface{ nullptr };

     //The image we will load and show on the screen
     SDL_Surface* gHelloWorld{ nullptr };


    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else {

        gWindow = SDL_CreateWindow("SDL3 Tutorial: Hello SDL3", SCREEN_WIDTH, SCREEN_HEIGHT, 0);
        if (gWindow == nullptr)
        {
            SDL_Log("Window could not be created! SDL error: %s\n", SDL_GetError());
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }
    while (true) {
        //Fill the surface white
        SDL_FillSurfaceRect(gScreenSurface, nullptr, SDL_MapSurfaceRGB(gScreenSurface, 0xFF, 0xFF, 0xFF));

        SDL_Rect rect{ 100,150, 40,40 };
        SDL_RenderRect()
        //Update the surface
        SDL_UpdateWindowSurface(gWindow);
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
