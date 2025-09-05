#pragma once
#include <string>

class Person
{
private:
    std::string name = "UNDEFINED";
    int         age  = -1;

public:
    Person(std::string name, int age);
    ~Person() = default;

    virtual void print(void);

    void        set_name(std::string new_name);
    std::string get_name(void);
    void        set_age(int new_age);
    int         get_age(void);
};
