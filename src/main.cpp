#include <memory>
#include <vector>

#include "person.hpp"
#include "scholar.hpp"

int
main()
{
    std::vector<std::unique_ptr<Person>> population;
    population.push_back(std::make_unique<Person>("Foo", 10));
    population.push_back(std::make_unique<Scholar>("Bar", 20));
    population.push_back(std::make_unique<Scholar>("Baz", 30));
    population.push_back(std::make_unique<Scholar>("Qux", 40));

    for (const auto& elem : population)
    {
        elem->print();
    }

    return 0;
}
