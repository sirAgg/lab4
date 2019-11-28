#include "MotorVehicle.h"

#include <iostream>
#include <cstdlib>

MotorVehicle::MotorVehicle(Engine engine, Body body, Owner owner, int num_of_tires, std::string model)
    : engine(engine), body(body), owner(owner), num_of_tires(num_of_tires), model(model)
{
    tire_diameters = new float[num_of_tires]; 
    
    for (int i = 0; i < num_of_tires; ++i) {
        tire_diameters[i] = (rand()%100)/100.0f;
    }
}

MotorVehicle::~MotorVehicle()
{
    delete[] tire_diameters;
}

void MotorVehicle::print()
{
    std::cout << "MotorVehicle:\n--------------------" << std::endl;
    engine.print();
    body.print();
    owner.print();
    std::cout << "TireDiamerets:" << std::endl;
    for (int i = 0; i < num_of_tires; ++i) {
        std::cout << "\t" << tire_diameters[i] << std::endl;
    }

    std::cout << "number of tires:\t" << num_of_tires << "\nmodel:\t\t\t" << model << std::endl;
}

