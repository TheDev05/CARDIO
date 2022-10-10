//**C++ Program To Find Character Is Vowel Or Not

#include <iostream>

int main()
{
    char let;
    std::cout << "ENTER YOUR CHARACTER: " << std::endl;
    std::cin >> let;

    if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
    {
        std::cout << let << " IS VOWEL" << std::endl;
    }
    else
        std::cout << let << " IS CONSONANT" << std::endl;
    return (0);
}