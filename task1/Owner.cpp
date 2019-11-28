#include "Owner.h"

#include <iostream>

Owner::Owner(std::string name, std::string address, bool allowed_to_drive)
    : name(name), address(address), allowed_to_drive(allowed_to_drive)
{}

void Owner::print()
{
    std::cout << "Owner:\n\tname: " << name << "\n\taddress: " << address << "\n\tAllowed to dive: " << (allowed_to_drive ? "yes" : "no") << std::endl;
}

