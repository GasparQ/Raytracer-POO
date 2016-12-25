//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_SCENE_HPP
#define RAYTRACER_SCENE_HPP

#include <vector>
#include "Graphic/AImage.hpp"
#include "Ray.hpp"

class Eye;
class Spot;
class AObject;

class Scene
{
public:
    Scene();
    Scene(Scene const &ref);
    Scene &operator=(Scene const &ref);
    ~Scene();

public:
    void AddEye(Eye *eye);
    void AddSpot(Spot *spot);
    void AddObject(AObject *obj);

public:
    AObject *RayCast(Ray &ray) const;

public:
    const std::vector<Eye *> & getEyes() const;

    const std::vector<Spot *> & getSpots() const;

private:
    std::vector<Eye *>  eyes;
    std::vector<Spot *> spots;
    std::vector<AObject *>  objects;
};

#endif //RAYTRACER_SCENE_HPP
