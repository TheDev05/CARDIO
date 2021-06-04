//**C++ Program To Convert A Lower Case To Upper Case

#include <iostream>

int main()
{
    char letter;

    std::cout << "ENTER A LETTER: " << std::endl;
    std::cin >> letter;

    letter = toupper(letter);

    std::cout << "OUTPUT: " << letter;
    return (0);
}