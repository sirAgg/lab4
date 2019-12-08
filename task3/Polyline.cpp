#include "Polyline.h"

#include <iostream>

Polyline::Polyline(int len)
    : max_lenght(len)
{
    points = new Point2D[max_lenght];
}

Polyline::~Polyline()
{
    delete[] points;
}


bool Polyline::add_Point(Point2D p)
{
    if( size >= max_lenght)
    {
        std::cout << "Can't fit anymore, I'm full" << std::endl; 
        return false;
    }
    
    points[size] = p;
    size++;
    return true;
}

Point2D* Polyline::get(int idx)
{
    if( idx >= size )
    {
        std::cout << "Index out of Range!" << std::endl; 
        return nullptr;
    }
    return &points[idx];
}

Point2D* Polyline::operator[](size_t idx)
{
    return get(idx);
}
    
bool Polyline::pop_last()
{
    if( size <= 0 )
    {
        std::cout << "Polyline is Empty!" << std::endl; 
        return false;
    }
    size--;
    return true;
}
    
int Polyline::get_size()
{
    return size;
}
    
float Polyline::get_lenght()
{
    float len = 0.0f;
    for(int i = 1; i < size; i++)
        len += get(i-1)->distance_to(*get(i));

    return len;
}
    
bool Polyline::contains_point()
{
    return size > 0;
}

void Polyline::print()
{
    for(int i = 0; i<size; i++)
        std::cout << get(i)->to_string() << std::endl;
}
