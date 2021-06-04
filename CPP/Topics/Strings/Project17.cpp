//** C program to replace all vowels with star (*) and consonants with hash (#) of string.

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'u' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e' || str[i] == 'a' || str[i] == 'U' || str[i] == 'O' || str[i] == 'I' || str[i] == 'E' || str[i] == 'A')
        {
            str[i] = '*';
        }

        else if (str[i] != ' ')

        {
            str[i] = '#';
        }
    }

    std::cout << "FINAL STRING: " << str << std::endl;
    return (0);
}