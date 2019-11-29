#include <iostream>

#include "Polyline.h"

int main()
{
    Polyline p(7);
    p.add_Point( Point2D(1,3) );
    p.add_Point( Point2D(2,-1) );
    p.add_Point( Point2D(3,7) );
    p.add_Point( Point2D(4,1) );
    p.add_Point( Point2D(5,6) );
    p.add_Point( Point2D(4,9) );
    p.add_Point( Point2D(-1,-3) );
    p.add_Point( Point2D(-2,6) );


    p.print();
    std::cout << "Size: " << p.get_size() << std::endl;
    std::cout << "Length: " << p.get_lenght() << std::endl;
    std::cout << "Contains point: " << p.contains_point() << std::endl;


    return 0;
}


