//
// Created by gaspar on 07/08/2016.
//

#include <iostream>
#include "GraphicException.hpp"
#include "RayTracer.hpp"
#include "SDLGraphic.hpp"

#undef main

int main(int ac, char **av)
{
    RayTracer   *raytracer;

    try
    {
        raytracer = new RayTracer(new SDLGraphic());
        raytracer->LoadScenes(ac, av);
        raytracer->DisplayScenes();
    }
    catch (GraphicException const &exception)
    {
        std::cerr << exception.what() << std::endl;
        return (1);
    }
    SDL_Event event;

    do
    {
        SDL_WaitEvent(&event);
    } while(event.type != SDL_KEYDOWN);
    delete(raytracer);
    return (0);
}
