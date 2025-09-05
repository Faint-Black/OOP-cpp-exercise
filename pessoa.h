#include <string>

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
private:
    std::string name;
    int age;
    /* data */
public:
    Pessoa(/* args */);
    Pessoa(std::string name, int age);

    void PrintPessoa();

    std::string GetName();
    void SetName(std::string name);
    
    int GetAge();
    void SetAge(int age);
    
    ~Pessoa();
};

#endif