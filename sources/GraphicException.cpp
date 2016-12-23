//
// Created by gaspar on 15/08/2016.
//

#include "GraphicException.hpp"

GraphicException::GraphicException(std::string const &err) :
        std::runtime_error(err)
{

}

GraphicException::~GraphicException()
{

}