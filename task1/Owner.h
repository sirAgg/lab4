#ifndef OWNER_H
#define OWNER_H value
#include <string>

class Owner
{
public:
    Owner(std::string name, std::string address, bool allowed_to_drive);
    void print();
private:
    std::string name;
    std::string address;
    bool allowed_to_drive;
};

#endif /* ifndef OWNER_H */
