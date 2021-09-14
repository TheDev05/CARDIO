//** C program to replace all vowels with star (*) and consonants with hash (#) of string.

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     for (int i = 0; str[i] != '\0'; i++)
//     {

//         if (str[i] == 'u' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e' || str[i] == 'a' || str[i] == 'U' || str[i] == 'O' || str[i] == 'I' || str[i] == 'E' || str[i] == 'A')
//         {
//             str[i] = '*';
//         }

//         else if (str[i] != ' ')

//         {
//             str[i] = '#';
//         }
//     }

//     std::cout << "FINAL STRING: " << str << std::endl;
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

        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            char temp = (text[i] >= 'A' && text[i] <= 'Z') ? text[i] + 0x20 : text[i];

            if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
            {
                text[i] = '*';
            }
            else
                text[i] = '#';
        }
    }

    std::cout << "REQUIRD STRING: " << text << std::endl;
    return (0);
}