//
// Created by gaspar on 15/08/2016.
//

#ifndef RAYTRACER_RAYTRACER_HPP
#define RAYTRACER_RAYTRACER_HPP

#include <vector>
#include "Scene.hpp"
#include "IGraphic.hpp"

class RayTracer
{
public:
    RayTracer(IGraphic *graphic);

    ~RayTracer();

public:
    void LoadScenes(int ac, char **av);

    void DisplayScenes();

private:
    IGraphic                *graphic;
    AWindow                 *window;
    std::vector<AImage *>   images;
    std::vector<Scene>      scenes;
};

#endif //RAYTRACER_RAYTRACER_HPP
