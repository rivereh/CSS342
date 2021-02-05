#include <iostream>

int main()
{
    std::string password = "river123";
    std::string guess;
    do
    {
        std::cout << "Enter password: ";
        std::cin >> guess;
    } while (guess != password);
    
}