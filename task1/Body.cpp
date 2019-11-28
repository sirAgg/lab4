#include "Body.h"

#include <iostream>

Body::Body(std::string color, float width, float height)
    : color(color), width(width), height(height) 
{}

void Body::print()
{
    std::cout << "Body:\n\tcolor: " << color << "\n\twidth: " << width << "\n\theight: " << height << std::endl;
}

