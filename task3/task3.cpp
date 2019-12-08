#include <iostream>

#include "Polyline.h"

int main()
{
    Polyline p(7);
    std::cout << "------ Filling ------" << std::endl;
    p.add_Point( Point2D(1,3) );
    p.add_Point( Point2D(2,-1) );
    p.add_Point( Point2D(3,7) );
    p.add_Point( Point2D(4,1) );
    p.add_Point( Point2D(5,6) );
    p.add_Point( Point2D(4,9) );
    p.add_Point( Point2D(-1,-3) );
    p.add_Point( Point2D(-2,6) );

    std::cout << "------ Printing ------" << std::endl;
    p.print();

    std::cout << "Size: " << p.get_size() << std::endl;
    std::cout << "Length: " << p.get_lenght() << std::endl;
    std::cout << "Contains point: " << p.contains_point() << std::endl;

    std::cout << "------ poping ------" << std::endl;
    p.pop_last();
    p.pop_last();
    p.pop_last();
    p.pop_last();
    p.pop_last();
    
    std::cout << "------ Printing ------" << std::endl;
    std::cout << "Size: " << p.get_size() << std::endl;
    std::cout << "Length: " << p.get_lenght() << std::endl;
    std::cout << "Contains point: " << p.contains_point() << std::endl;

    std::cout << "------ Accsesing ------" << std::endl;
    std::cout << p[0]->to_string() << std::endl;
    std::cout << p[1]->to_string() << std::endl;

    std::cout << "------ poping ------" << std::endl;
    p.pop_last();
    p.pop_last();
    p.pop_last();

    

    return 0;
}



