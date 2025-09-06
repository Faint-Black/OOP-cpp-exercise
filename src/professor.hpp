#pragma once

#include "scholar.hpp"

class Professor : public Scholar
{
private:
    Scholar::Subject teaching_subject;

public:
    using Scholar::Scholar; // inherit constructors
    Professor(std::string name, int age, Scholar::Subject subject);
    ~Professor() = default;

    void print(void) override;

    Scholar::Subject get_subject(void);
    void             set_subject(Scholar::Subject subject);
};
