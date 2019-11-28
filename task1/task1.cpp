#include <iostream>

#include "MotorVehicle.h"

int main()
{
    MotorVehicle m1( 
            Engine( 1.1111f, 7),
            Body("red", 3.0f, 5.0f),
            Owner("Olle", "Ankeborg 313", false),
            5,
            "Quackomobil"
    );

    m1.print();

    while(true)
    {
        float engine_size;
        int engine_cylinders;

        std::string body_color;
        float body_width, body_height;

        std::string owner_name, owner_address, owner_allowed_to_drive;

        int num_of_tires;
        std::string model;

        std::cout << "Engine size: ";
        std::cin >> engine_size;
        std::cout << "Engine number of cylinders: ";
        std::cin >> engine_cylinders;

        std::cout << "Body color: ";
        std::cin >> body_color;
        std::cout << "Body width: ";
        std::cin >> body_width;
        std::cout << "Body height: ";
        std::cin >> body_height;

        std::cout << "Owner name: ";
        std::cin >> owner_name;
        std::cout << "Owner address: ";
        std::cin >> owner_address;
        std::cout << "Is owner allowed to drive[Y/n]: ";
        std::cin >> owner_allowed_to_drive;

        std::cout << "Number of tires: ";
        std::cin >> num_of_tires;
        std::cout << "Model: ";
        std::cin >> model;

        MotorVehicle m( 
                Engine( engine_size, engine_cylinders),
                Body(body_color, body_width, body_height),
                Owner(owner_name, owner_address, (owner_allowed_to_drive == "n")),
                num_of_tires,
                model
        );


        m.print();

        std::string ans;
        std::cout << "Enter another vehicle [Y/n]: " << std::endl;
        std::cin >> ans;
        if(ans == "n")
            break;
    
    }

    return 0;
}
