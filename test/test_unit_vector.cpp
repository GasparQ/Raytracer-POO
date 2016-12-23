//
// Created by gaspar on 07/10/2016.
//

#include <CalculUnit.hpp>
#include <iostream>

int main()
{
    Vector3<double> already(1, 0, 0);
    Vector3<double> notyet(3, 0, 0);

    std::cout << "Already unit: " << CalculUnit::unit.GetUnitVector(already) << std::endl;
    std::cout << "Not yet unit: " << CalculUnit::unit.GetUnitVector(notyet) << std::endl;
    return (0);
}