//**C++ Program To Print Ascii Value Of Character

#include <iostream>

int main()
{
    char input;

    std::cout << "ENTER YOUR VALUE: " << std::endl;
    std::cin >> input;

    std::cout << "ASCII VALUE OF " << input << " IS: " << (int)input << std::endl;

    return (0);
}