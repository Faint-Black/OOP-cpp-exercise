#include "student.hpp"
#include "scholar.hpp"

#include <iostream>

Student::Student(std::string name, int age)
    : Scholar(name, age)
{
    this->learning_subjects = {};
}

void
Student::print(void)
{
    std::cout << "Student '" << this->get_name() << "'" << std::endl;
    std::cout << "  ID: " << this->get_id() << std::endl;
    std::cout << "  Currently enrolled in the following classes:" << std::endl;
    for (const auto& elem : this->learning_subjects)
    {
        std::cout << "   -" << Scholar::string_from_subject(elem) << std::endl;
    }
}

void
Student::add_subject(Scholar::Subject subject)
{
    this->learning_subjects.push_back(subject);
}
