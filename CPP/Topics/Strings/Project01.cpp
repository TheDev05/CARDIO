//**C++ Program To Convert A Lower Case To Upper Case

// #include <iostream>

// int main()
// {
//     char letter;

//     std::cout << "ENTER A LETTER: " << std::endl;
//     std::cin >> letter;

//     letter = toupper(letter);

//     std::cout << "OUTPUT: " << letter;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(text, 20);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 0x20;
        }
    }

    std::cout << "TEXT: " << text << std::endl;
    return (0);
}