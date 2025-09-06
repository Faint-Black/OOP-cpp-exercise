#include "professor.hpp"
#include "scholar.hpp"

#include <iostream>
#include <ostream>

Professor::Professor(std::string name, int age, Scholar::Subject subject)
    : Scholar(name, age)
{
    this->teaching_subject = subject;
}

void
Professor::print(void)
{
    const std::string subj = Scholar::string_from_subject(this->teaching_subject);
    std::cout << "Professor '" << this->get_name() << "'" << std::endl;
    std::cout << "  ID: " << this->get_id() << std::endl;
    std::cout << "  Currently teaching " << subj << std::endl;
}

Scholar::Subject
Professor::get_subject(void)
{
    return this->teaching_subject;
}

void
Professor::set_subject(Scholar::Subject subject)
{
    this->teaching_subject = subject;
}
