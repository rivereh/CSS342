#include <iostream>

int main()
{
    int number = 3;
    int* np = &number;
    std::cout << *np << std::endl;
}