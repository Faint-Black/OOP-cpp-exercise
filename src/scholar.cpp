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
    std::cout << "  ID: " << this->credential_id << std::endl;
    std::cout << "  Name: " << this->get_name() << std::endl;
    std::cout << "  Age: " << this->get_age() << std::endl;
}

unsigned long
Scholar::get_id(void)
{
    return this->credential_id;
}

std::string
Scholar::string_from_subject(Scholar::Subject subject)
{
    switch (subject)
    {
    case Scholar::Subject::ALGEBRA:
        return std::string("Algebra");
    case Scholar::Subject::CALCULUS:
        return std::string("Calculus");
    case Scholar::Subject::PHYSICS:
        return std::string("Physics");
    case Scholar::Subject::PROGRAMMING:
        return std::string("Programming");
    default:
        return std::string("UNDEFINED");
    }
}
