//
// Created by gaspar on 14/08/2016.
//

#include <SDL2/SDLImage.hpp>
#include "SDL2/SDLWindow.hpp"

SDLWindow::SDLWindow(Vector2<int> const &winSize, Vector2<int> const &winPos, const std::string &title) :
    AWindow(winSize, winPos, title)
{
    win = SDL_CreateWindow(title.c_str(), getPos().x, getPos().y, getSize().x, getSize().y, 0);
    if (win == NULL)
        throw GraphicException(SDL_GetError());
    renderer = SDL_CreateRenderer(win, -1, 0);
    if (renderer == NULL)
        throw GraphicException(SDL_GetError());
}

SDLWindow::~SDLWindow()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
}

void SDLWindow::DisplayImage(AImage *todisplay) throw(GraphicException)
{
    SDL_Texture *texture = (SDL_Texture *)todisplay->ConvertPixels();
    SDL_Rect    dest = {todisplay->getPos().x, todisplay->getPos().y, todisplay->getSize().x, todisplay->getSize().y};

    if (SDL_RenderCopy(renderer, texture, NULL, &dest) != 0)
        throw GraphicException(SDL_GetError());
    SDL_RenderPresent(renderer);
}

AImage *SDLWindow::CreateImage(Vector2<int> const &size, Vector2<int> const &pos) throw(GraphicException)
{
    return new SDLImage(size, pos, renderer);
}