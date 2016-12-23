//
// Created by gaspar on 15/08/2016.
//

#ifndef RAYTRACER_GRAPHICEXCEPTION_HPP
#define RAYTRACER_GRAPHICEXCEPTION_HPP

#include <stdexcept>

class GraphicException : public std::runtime_error
{
public:
    GraphicException(std::string const &err);

    virtual ~GraphicException();

    using std::runtime_error::what;
};

#endif //RAYTRACER_GRAPHICEXCEPTION_HPP
