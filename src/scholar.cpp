#include <iostream>

#include "scholar.hpp"

unsigned long Scholar::id_counter = 0;

Scholar::Scholar(std::string name, int age)
    : Person(name, age)
{
    this->credential_id = id_counter;
    id_counter += 1;
}

void
Scholar::print(void)
{
    std::cout << "PURE SCHOLAR OBJECT" << std::endl;
    std::cout << "  Name: " << this->get_name() << std::endl;
    std::cout << "  Age: " << this->get_age() << std::endl;
    std::cout << "  ID: " << this->credential_id << std::endl;
}

unsigned long
Scholar::get_id(void)
{
    return this->credential_id;
}
