#include "pessoa.h"
#include "professor.h"
#include <iostream>

Professor::Professor(std::string name, int age, std::string subject) : Pessoa(name, age)
{
    this->subject = subject;
}
std::string
Professor::GetSubject()
{
    return this->subject;
}
void
Professor::SetSubject(std::string subject)
{
    this->subject = subject;
    return;
}
Professor::~Professor()
{
}

void
Professor::PrintProfessor()
{
    PrintPessoa();
    std::cout << "Subject: " << this->subject << "\n";
    return;
}

void
Professor::PrintPessoa()
{
    std::cout << "Name: " << this->GetName() << "\n";
    std::cout << "Age: " << this->GetAge() << "\n";
    std::cout << "Subject: " << this->subject << "\n";
    return;
}
