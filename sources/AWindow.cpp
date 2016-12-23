//
// Created by gaspar on 14/08/2016.
//

#include "AWindow.hpp"

AWindow::AWindow(Vector2<int> const &winSize, Vector2<int> const &winPos, const std::string &winTitle) :
    size(winSize),
    pos(winPos),
    title(winTitle)
{

}

AWindow::~AWindow()
{

}


const Vector2<int> &AWindow::getSize() const
{
    return size;
}

void AWindow::setSize(const Vector2<int> &size)
{
    AWindow::size = size;
}

const Vector2<int> &AWindow::getPos() const
{
    return pos;
}

void AWindow::setPos(const Vector2<int> &pos)
{
    AWindow::pos = pos;
}

const std::string &AWindow::getTitle() const
{
    return title;
}

void AWindow::setTitle(const std::string &title)
{
    AWindow::title = title;
}