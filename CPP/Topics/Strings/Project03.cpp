//**C++ Program To Print A Full String Input By Keyboard

#include <iostream>

int main()
{
    char sen[20];
    std::cout << "ENTER A STRING: " << std::endl;
    std::cin.getline(sen, 20);

    std::cout << "OUTPUT: " << std::endl;
    std::cout << sen;

    return (0);
}