//
// Created by gaspar on 15/08/2016.
//

#include <Object/Sphere.hpp>
#include <Effect/LightPhong.hpp>
#include <Object/Cylinder.hpp>
#include <Object/Plan.hpp>
#include <Object/Cone.hpp>
#include "Core/RayTracer.hpp"
#include "Core/Eye.hpp"
#include "Object/AObject.hpp"
#include "Core/Spot.hpp"

RayTracer::RayTracer(IGraphic *graphic) :
    graphic(graphic)
{
    graphic->InitDisplay();
    window = graphic->CreateWindow({300, 300}, {100, 100}, "Ray tracer");
}

RayTracer::~RayTracer()
{
    for (AImage *img : images)
    {
        delete(img);
    }
    delete(window);
    graphic->ShutDownDisplay();
    delete(graphic);
}

void RayTracer::LoadScenes(int ac, char **av)
{
    scenes.push_back(Scene());

    Scene   &toLoad = scenes.back();
    AObject *object;

    toLoad.AddEye(new Eye({-500, 0, 200}));

    object = new Sphere(Vector3<double>::Zero, Vector3<double>::Zero, Color(0, 200, 100, 50), {});
    object->AddEffect(new LightPhong(0, 1, 30, 50, 0));
    toLoad.AddObject(object);

//    object = new Plan(Vector3<double>::Zero, Vector3<double>::Zero, Color::red);
//    object->AddEffect(new LightPhong(0, 1, 30, 50, 0));
//    toLoad.AddObject(object);
//
//    object = new Cone({0, 50, 0});
//    object->AddEffect(new LightPhong(0, 1, 30, 50, 0));
//    toLoad.AddObject(object);

    toLoad.AddSpot(new Spot({-1000, 0, 100}));
    //todo load scenes from files
}

void RayTracer::DisplayScenes()
{
    for (Scene const &scene : scenes)
    {
        std::vector<Eye *> const &eyes = scene.getEyes();
        for (Eye *currEye : eyes)
        {
            images.push_back(window->CreateImage(window->getSize(), {0, 0}));
            currEye->Render(scene, images.back());
            window->DisplayImage(images.back());
        }
    }
}