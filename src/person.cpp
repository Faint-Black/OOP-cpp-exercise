#include "person.hpp"

#include <iostream>

Person::Person(std::string name, int age)
{
    this->name = name;
    this->age  = age;
}

void
Person::print(void)
{
    std::cout << "PURE PERSON OBJECT" << std::endl;
    std::cout << "  Name: " << this->name << std::endl;
    std::cout << "  Age: " << this->age << std::endl;
}

void
Person::set_name(std::string new_name)
{
    this->name = new_name;
}

std::string
Person::get_name(void)
{
    return this->name;
}

void
Person::set_age(int new_age)
{
    this->age = new_age;
}

int
Person::get_age(void)
{
    return this->age;
}
