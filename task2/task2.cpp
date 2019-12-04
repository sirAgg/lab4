#include <iostream>

#include "Point2D.h"

int main()
{
    Point2D p1(3.0f,4.0f);
    Point2D p2(7.0f,2.0f);

    std::cout << "p1: " << p1.to_string() << std::endl;
    std::cout << "p2: " << p2.to_string() << std::endl;

    Point2D p3 = p2;

    if( p3 == p1 )  std::cout << "p3 is p1" << std::endl;
    else            std::cout << "p3 is not p1" << std::endl;

    if( p3 == p2 )  std::cout << "p3 is p2" << std::endl;
    else            std::cout << "p3 is not p2" << std::endl;


    Point2D p4 = p1+p3;
    std::cout << "p4: " << p4.to_string() << std::endl;

    std::cout << "distance between p2 and p4: " << p2.distance_to(p4) << std::endl;


    if( p4 == p1 )  std::cout << "p4 is p1" << std::endl;
    else            std::cout << "p4 is not p1" << std::endl;

    if( p4 == p2 )  std::cout << "p4 is p2" << std::endl;
    else            std::cout << "p4 is not p2" << std::endl;

    if( p4 == p3 )  std::cout << "p4 is p3" << std::endl;
    else            std::cout << "p4 is not p3" << std::endl;


    return 0;
}
