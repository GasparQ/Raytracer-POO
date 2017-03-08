//
// Created by GasparQ on 07/03/2017.
//

#include <iostream>
#include <Core/Ray.hpp>
#include <Core/CalculUnit.hpp>

int main()
{
    Ray incident(Vector3<double>::Zero, {1, 0, 0});
    Ray refrac = CalculUnit::unit.GetRefractedRay(1, 1, incident, CalculUnit::unit.GetUnitVector({-1, -1, 0}));
    Ray refrac1 = CalculUnit::unit.GetRefractedRay(1, 1.33, incident, CalculUnit::unit.GetUnitVector({-1, -1, 0}));
    Ray refrac2 = CalculUnit::unit.GetRefractedRay(1, 5, incident, CalculUnit::unit.GetUnitVector({-1, -1, 0}));
    Ray refrac3 = CalculUnit::unit.GetRefractedRay(1, 0.5, incident, CalculUnit::unit.GetUnitVector({-1, -1, 0}));

    std::cout << "Incident: " << incident << std::endl;
    std::cout << "Refracted: " << refrac << std::endl;
    std::cout << "Refracted: " << refrac1 << std::endl;
    std::cout << "Refracted: " << refrac2 << std::endl;
    std::cout << "Refracted: " << refrac3 << std::endl;
    return 0;
}