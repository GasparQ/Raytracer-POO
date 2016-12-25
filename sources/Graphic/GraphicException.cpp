//
// Created by gaspar on 15/08/2016.
//

#include "Graphic/GraphicException.hpp"

GraphicException::GraphicException(std::string const &err) :
        std::runtime_error(err)
{

}

GraphicException::~GraphicException()
{

}