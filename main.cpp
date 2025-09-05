#include <iostream>
#include "pessoa.h"
#include "professor.h"

#include <vector>

int main()
{
    Pessoa p1("Joao", 20);
    std::cout << "Name: " << p1.GetName() << "\n";
    std::cout << "Age: " << p1.GetAge() << "\n";

    Pessoa p2;
    p2.SetName("Maria");
    p2.SetAge(25);
    std::cout << "Name: " << p2.GetName() << "\n";
    std::cout << "Age: " << p2.GetAge() << "\n";

    Professor prof1("Dr. Smith", 45, "Mathematics");
    std::cout << "Professor Name: " << prof1.GetName() << "\n";
    std::cout << "Professor Age: " << prof1.GetAge() << "\n";
    std::cout << "Subject: " << prof1.GetSubject() << "\n";

    Professor prof2("Dr. Johnson", 50, "Physics");
    prof2.SetName("Dr. Johnson the second");
    prof2.PrintPessoa(); 

    std::cout << "\nPrinting all people:\n";
    std::vector<Pessoa> people;
    people.push_back(p1);
    people.push_back(p2);
    people.push_back(prof1);
    people.push_back(prof2);
    for(auto p : people) {
        p.PrintPessoa();
    }

    return 0;
}