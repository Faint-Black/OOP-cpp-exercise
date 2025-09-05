#include "pessoa.h"

#ifndef PROFESSOR_H
#define PROFESSOR_H

class Professor : public Pessoa
{
private:
    std::string subject;
public:
    Professor(std::string name, int age, std::string subject);
    std::string GetSubject();
    void SetSubject(std::string subject);
    ~Professor();

    void PrintProfessor();
    void PrintPessoa();
};

#endif