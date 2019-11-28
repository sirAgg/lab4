#ifndef BODY_H
#define BODY_H value

#include <string>

class Body
{
public:
    Body(std::string color, float width, float height);
    void print();
private:
    std::string color;
    float width, height;
};

#endif /* ifndef BODY_H */
