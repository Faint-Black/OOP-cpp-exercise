#include <memory>
#include <vector>

#include "person.hpp"

int
main()
{
    std::vector<std::unique_ptr<Person>> population;
    population.push_back(std::make_unique<Person>("Foo", 10));
    population.push_back(std::make_unique<Person>("Bar", 20));
    population.push_back(std::make_unique<Person>("Baz", 30));

    for (const auto& elem : population)
    {
        elem->print();
    }

    return 0;
}
