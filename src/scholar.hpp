#pragma once

#include "person.hpp"

class Scholar : public Person
{
private:
    static unsigned long id_counter;
    unsigned long        credential_id;

public:
    using Person::Person; // inherit constructors
    Scholar(std::string name, int age);
    ~Scholar() = default;

    void print(void) override;

    unsigned long get_id(void);

    enum class Subject
    {
        CALCULUS,
        PHYSICS,
        ALGEBRA,
        PROGRAMMING,
    };
    std::string string_from_subject(Scholar::Subject subject);
};
