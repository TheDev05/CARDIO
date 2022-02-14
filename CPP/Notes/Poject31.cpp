//** PRINTING ASCII VALUES:

#include <iostream>

int main()
{
    char letter;

    std::cout << "ENTER YOUR CHARACTER: " << std::endl;
    std::cin >> letter;

    std::cout << "THE ASCII VALUE OF " << letter << " IS: " << (int)letter << std::endl;
    return (0);
}