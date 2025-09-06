#include <memory>
#include <vector>

#include "person.hpp"
#include "professor.hpp"
#include "scholar.hpp"

int
main()
{
    std::vector<std::unique_ptr<Person>> population;
    population.push_back(std::make_unique<Person>("Foo", 10));
    population.push_back(std::make_unique<Scholar>("Bar", 20));
    population.push_back(std::make_unique<Scholar>("Baz", 30));
    population.push_back(std::make_unique<Scholar>("Qux", 40));
    population.push_back(std::make_unique<Professor>("John", 40, Scholar::Subject::CALCULUS));

    for (const auto& elem : population)
    {
        elem->print();
    }

    return 0;
}
