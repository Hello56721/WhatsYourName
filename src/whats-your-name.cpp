#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cin.ignore();
    std::cin.ignore();
    
    return 0;
}