#include <memory>
#include <vector>

#include "person.hpp"
#include "professor.hpp"
#include "scholar.hpp"
#include "student.hpp"

int
main()
{
    std::vector<std::unique_ptr<Person>> population;

    population.push_back(std::make_unique<Person>("Foo", 10));
    population.push_back(std::make_unique<Scholar>("Bar", 20));
    population.push_back(std::make_unique<Scholar>("Baz", 30));
    population.push_back(std::make_unique<Scholar>("Qux", 40));

    population.push_back(std::make_unique<Professor>("Octavius", 40, Scholar::Subject::CALCULUS));

    population.push_back(std::make_unique<Student>("Peter", 17));
    static_cast<Student*>(population.back().get())->add_subject(Scholar::Subject::CALCULUS);
    static_cast<Student*>(population.back().get())->add_subject(Scholar::Subject::PHYSICS);
    static_cast<Student*>(population.back().get())->add_subject(Scholar::Subject::PROGRAMMING);

    for (const auto& elem : population)
    {
        elem->print();
    }

    return 0;
}
