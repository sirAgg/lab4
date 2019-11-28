#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H value

#include <string>

#include "Engine.h"
#include "Body.h"
#include "Owner.h"

class MotorVehicle
{
public:
    MotorVehicle(Engine engine, Body body, Owner owner, int num_of_tires, std::string model);
    virtual ~MotorVehicle();

    void print();

private:
    Engine engine;
    Body body;
    Owner owner;
    float* tire_diameters;
    int num_of_tires;
    std::string model;
};

#endif /* ifndef MOTORVEHICLE_H */
