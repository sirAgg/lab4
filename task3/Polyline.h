#ifndef POLYLINE_H
#define POLYLINE_H value

#include "../task2/Point2D.h"

class Polyline
{
public:
    Polyline(int len);
    virtual ~Polyline();

    bool add_Point(Point2D p);
    Point2D* get(int idx);
    Point2D* operator[](size_t idx);

    bool pop_last();
    int get_size();
    float get_lenght();
    bool contains_point();
    void print();

private:
    const int max_lenght;
    int size = 0;
    Point2D* points;
};


#endif /* ifndef POLYLINE_H */
