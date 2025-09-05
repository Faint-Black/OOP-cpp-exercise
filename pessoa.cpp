#include <iostream>
#include "pessoa.h"

Pessoa::Pessoa(/* args */)
{
    this->name = "";
    this->age = -1;
}

Pessoa::Pessoa(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

void
Pessoa::PrintPessoa()
{
    std::cout << "Name: " << this->name << "\n";
    std::cout << "Age: " << this->age << "\n";
    return;
}

std::string 
Pessoa::GetName()
{
    return this->name;
}

void
Pessoa::SetName(std::string name)
{
    this->name = name;
    return;
}
void
Pessoa::SetAge(int age)
{
    this->age = age;
    return;
}

int
Pessoa::GetAge()
{
    return this->age;
}

Pessoa::~Pessoa()
{
}