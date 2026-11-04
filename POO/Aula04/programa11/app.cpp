#include "date.hpp"
#include "employee.hpp"
#include <iostream>

int main(void)
{
    std::cout << "Demonstrating Composition: an object with member objects\n\n";

    Date birth(1, 13, 1977);

    Date hire(1, 9, 2010);

    Employee manager("Walter", "Paraiba", birth, hire);

    std::cout << "\n\n";

    manager.printInfo();

    std::cout << "\n\n";
    
    return 0;
}


