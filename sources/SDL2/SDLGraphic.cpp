//
// Created by gaspar on 07/08/2016.
//

#include <SDL2/SDLWindow.hpp>
#include <SDL2/SDLImage.hpp>
#include "SDL2/SDLGraphic.hpp"

SDLGraphic::SDLGraphic()
{

}

SDLGraphic::~SDLGraphic() throw()
{

}

AWindow *SDLGraphic::CreateWindow(Vector2<int> const &size, Vector2<int> const &pos, std::string const &title) throw(GraphicException)
{
    return new SDLWindow(size, pos, title);
}

void SDLGraphic::InitDisplay(Vector2<int> const &winsize, Vector2<int> const &winpos, std::string const &wintitle) throw(GraphicException)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        throw new GraphicException(SDL_GetError());
}

void SDLGraphic::ShutDownDisplay(void)
{
    SDL_Quit();
}
