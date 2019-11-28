#include "Engine.h"

#include <iostream>

Engine::Engine(float size_in_liters, int n_cylinders)
    : size_in_liters(size_in_liters), num_of_cylinders(n_cylinders) 
{}

void Engine::print()
{
    std::cout << "Engine:\n\tsize: " << size_in_liters << "\n\tcyliders: " << num_of_cylinders << std::endl;
}
