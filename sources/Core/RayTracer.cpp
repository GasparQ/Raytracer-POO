//
// Created by gaspar on 15/08/2016.
//

#include <Object/Sphere.hpp>
#include <Effect/LightPhong.hpp>
#include <Object/Cylinder.hpp>
#include <Object/Plan.hpp>
#include <Object/Cone.hpp>
#include <Effect/Reflect.hpp>
#include <iostream>
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

    toLoad.AddEye(new Eye({-500, 0, 50}));

//    object = new Sphere(Vector3<double>::Zero, Vector3<double>::Zero, Color(0, 200, 100, 50), {});
//    object->AddEffect(new LightPhong(0, 1, 30, 50, 0));
//    toLoad.AddObject(object);

    Reflect::setRecursionLimit(30);

    object = new Sphere({0, 0, 150}, {0, 0, 90}, Color(0, 200, 100, 50), {});
    toLoad.AddObject(object);
    object->AddEffect(new Reflect(0.8));
    object->AddEffect(new LightPhong(0, 1, 1, 320, 0));
//    object = new Cylinder({0, 0, 0}, {0, 0, 0}, Color(0, 200, 100, 50), {});
//    object->AddEffect(new LightPhong(0, 1, 1, 320, 0));
//    toLoad.AddObject(object);

//    object = new Cylinder({0, 0, 0}, {90, 0, 90}, Color(0, 200, 100, 50), {});
//    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
//    toLoad.AddObject(object);

    object = new Plan();
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

    object = new Plan({0, 0, 300}, Vector3<double>::Zero, Color::white, {}, {0, 0, -1});
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

    object = new Plan({0, 150, 0}, {90, 0, 0});
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

    object = new Plan({0, -150, 0}, {-90, 0, 0});
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

    object = new Plan({150, 0, 0}, {0, -90, 0});
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

    object = new Plan({-550, 0, 0}, {0, 90, 0});
    object->AddEffect(new LightPhong(0, 1, 0, 0, 0));
    object->AddEffect(new Reflect(0.3));
    toLoad.AddObject(object);

//    object = new Cone({0, 50, 0});
//    object->AddEffect(new LightPhong(0, 1, 30, 50, 0));
//    toLoad.AddObject(object);

    toLoad.AddSpot(new Spot({-500, 0, 150}));

//    Ray tocast({-500, 180, 0}, {1, 0, 0});

//    std::cout << "Casting the ray: " << tocast << std::endl;
//    RaycastHit hit = scenes[0].RayCast(tocast);

    //double rotate
    /*
     * Casting the ray: {point: {-500, 180, 0}, dir: {1, 0, 0}}
     * Distance: 402.02
     * Gives the following hit:
     * {
     *      obj: 0x23b24d0,
     *      isec: {-97.9796, 180, 0},
     *      normal: {-0.979796, -0.2, -1.2326e-032},
     *      incid_ray: {
     *          point: {-500, 180, 0},
     *          dir: {1, 0, 0}
     *      }
     *  }
     */

    //no rotate
    /*
     * Casting the ray: {point: {-500, 180, 0}, dir: {1, 0, 0}}
     * Distance: 402.02
     * Gives the following hit:
     * {
     *      obj: 0x26624d0,
     *      isec: {-97.9796, 180, 0},
     *      normal: {-0.979796, -0.2, 0},
     *      incid_ray: {
     *          point: {-500, 180, 0},
     *          dir: {1, 0, 0}
     *      }
     * }
     */


//    std::cout << "Gives the following hit: " << hit << std::endl;
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