#pragma once

#include "scholar.hpp"
#include <vector>

class Student : public Scholar
{
private:
    std::vector<Scholar::Subject> learning_subjects;

public:
    using Scholar::Scholar; // inherit constructors
    Student(std::string name, int age);
    ~Student() = default;

    void print(void) override;

    void add_subject(Scholar::Subject subject);
};
